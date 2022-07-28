mod test;

use tree_sitter::Node;

const INDENT: usize = 2;

const CONTAINERS: &[&str] = &[
    "source_file",
    "sql_statement",
    "sql_select_statement",
    "sql_select_clause",
    "sql_group_by_clause",
    "sql_order_by_clause",
    "sql_limit_clause",
    "sql_from_clause",
    "sql_where_clause",
    "sql_parens",
    "sql_boolean_expr",
];

const COMMA_SEPS: &[&str] = &[
    "sql_column_list",
    "sql_table_list",
    "sql_group_by_expression",
    "sql_order_by_expression",
    "sql_where_expression",
    "sql_limit_expression",
];

#[derive(Debug, Clone)]
pub struct FormatterContext {
    indent: usize,
}

impl std::default::Default for FormatterContext {
    fn default() -> Self {
        Self { indent: INDENT }
    }
}

impl FormatterContext {
    fn indent(self) -> Self {
        Self {
            indent: self.indent + INDENT,
            ..self
        }
    }
}

pub trait Formatted {
    fn formatted(self, context: &FormatterContext) -> String;
}

#[derive(Debug)]
pub enum Jsql {
    CommaSep(CommaSep),
    Container(Container),
    Plain(Plain),
}

impl Jsql {
    pub fn new(node: &Node, source: &str) -> Self {
        match node {
            n if CONTAINERS.contains(&n.kind()) => Jsql::Container(Container::new(&n, &source)),
            n if COMMA_SEPS.contains(&n.kind()) => Jsql::CommaSep(CommaSep::new(&n, &source)),
            n => {
                dbg!(node.kind());
                Jsql::Plain(Plain::new(n, &source))
            }
        }
    }
}

impl Formatted for Jsql {
    fn formatted(self, context: &FormatterContext) -> String {
        match self {
            Jsql::CommaSep(o) => o.formatted(&context),
            Jsql::Container(o) => o.formatted(&context),
            Jsql::Plain(o) => o.formatted(&context),
        }
    }
}

fn children(node: &Node, source: &str) -> Vec<Jsql> {
    let mut cursor = node.walk();
    let children = node
        .children(&mut cursor)
        .map(|ch| Jsql::new(&ch, source))
        .collect();
    children
}

fn formatted(children: Vec<Jsql>, context: &FormatterContext) -> String {
    let s: Vec<String> = children
        .into_iter()
        .map(|ch| ch.formatted(&context))
        .collect();
    s.join("\n")
}

#[derive(Debug)]
pub struct Container {
    children: Vec<Jsql>,
    is_source_file: bool,
}

impl Container {
    fn new(node: &Node, source: &str) -> Self {
        let children = children(&node, &source);
        Container {
            children,
            is_source_file: node.kind() == "source_file",
        }
    }
}

impl Formatted for Container {
    fn formatted(self, context: &FormatterContext) -> String {
        let fc = formatted(self.children, &context);
        if self.is_source_file {
            fc + "\n"
        } else {
            fc
        }
    }
}

#[derive(Debug)]
pub struct CommaSep {
    children: Vec<Jsql>,
}

impl CommaSep {
    fn new(node: &Node, source: &str) -> Self {
        let mut cursor = node.walk();
        let children = node
            .children(&mut cursor)
            .filter(|ch| ch.kind() != ",")
            .map(|ch| Jsql::new(&ch, source))
            .collect();
        CommaSep { children }
    }
}

impl Formatted for CommaSep {
    fn formatted(self, context: &FormatterContext) -> String {
        let ctx = context.clone().indent();
        let s: Vec<String> = self
            .children
            .into_iter()
            .map(|ch| ch.formatted(&ctx))
            .collect();
        let indent = " ".repeat(context.indent);
        let joiner = format!("{}{}{}", "\n", indent, ", ");
        indent + &s.join(&joiner)
    }
}

#[derive(Debug)]
pub struct Plain {
    text: String,
}

impl Plain {
    pub fn new(node: &Node, source: &str) -> Self {
        Plain {
            text: node.utf8_text(source.as_bytes()).unwrap().to_string(),
        }
    }
}

impl Formatted for Plain {
    fn formatted(self, context: &FormatterContext) -> String {
        self.text
    }
}
