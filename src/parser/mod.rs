use crate::formatter::Jsql;
use tree_sitter::Parser;
use tree_sitter_jsql::language;

pub fn parse(source_code: &str) -> Jsql {
    let mut parser = Parser::new();
    let language = language();
    parser.set_language(language).unwrap();

    let tree = parser.parse(source_code, None).unwrap();
    let root_node = tree.root_node();
    Jsql::new(&root_node, &source_code)
}
