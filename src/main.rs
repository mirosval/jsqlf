mod formatter;
mod parser;

use parser::parse;

use crate::formatter::Formatted;

fn main() {
    let source_code = "select a,b from c";
    let jsql = parse(&source_code);
    println!("{}", &jsql.formatted(&Default::default()));
}
