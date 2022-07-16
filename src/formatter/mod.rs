mod test;

use tree_sitter::Node;

#[derive(Debug)]
pub enum Jsql {
    CommaSep(CommaSep),
    Container(Container),
    Plain(Plain),
}

impl Jsql {
    pub fn new(node: &Node, source: &str) -> Self {
        match node {
            n if n.kind() == "source_file" => Jsql::Container(Container::new(&n, &source)),
            n if n.kind() == "sql_statement" => Jsql::Container(Container::new(&n, &source)),
            n if n.kind() == "sql_select_statement" => Jsql::Container(Container::new(&n, &source)),
            n if n.kind() == "sql_select_clause" => Jsql::Container(Container::new(&n, &source)),
            n if n.kind() == "sql_group_by_clause" => Jsql::Container(Container::new(&n, &source)),
            n if n.kind() == "sql_order_by_clause" => Jsql::Container(Container::new(&n, &source)),
            n if n.kind() == "sql_limit_clause" => Jsql::Container(Container::new(&n, &source)),
            n if n.kind() == "sql_from_clause" => Jsql::Container(Container::new(&n, &source)),
            n if n.kind() == "sql_column_list" => Jsql::CommaSep(CommaSep::new(&n, &source)),
            n if n.kind() == "sql_table_list" => Jsql::CommaSep(CommaSep::new(&n, &source)),
            n if n.kind() == "sql_group_by_expression" => {
                Jsql::CommaSep(CommaSep::new(&n, &source))
            }
            n if n.kind() == "sql_order_by_expression" => {
                Jsql::CommaSep(CommaSep::new(&n, &source))
            }
            n if n.kind() == "sql_limit_expression" => Jsql::CommaSep(CommaSep::new(&n, &source)),
            n => {
                dbg!(node.kind());
                Jsql::Plain(Plain::new(n, &source))
            }
        }
    }

    pub fn formatted(self) -> String {
        match self {
            Jsql::CommaSep(o) => o.formatted(),
            Jsql::Container(o) => o.formatted(),
            Jsql::Plain(o) => o.formatted(),
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

fn formatted(children: Vec<Jsql>) -> String {
    let s: Vec<String> = children.into_iter().map(|ch| ch.formatted()).collect();
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

    fn formatted(self) -> String {
        let fc = formatted(self.children);
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

    fn formatted(self) -> String {
        let s: Vec<String> = self.children.into_iter().map(|ch| ch.formatted()).collect();
        "  ".to_owned() + &s.join("\n  , ")
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

    pub fn formatted(self) -> String {
        self.text
    }
}

#[derive(Debug)]
pub struct Skip;

impl Skip {
    pub fn new(node: &Node, source: &str) -> Self {
        Skip
    }

    pub fn formatted(self) -> String {
        "".to_owned()
    }
}
