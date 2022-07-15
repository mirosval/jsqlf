#[cfg(test)]
mod test {
    use crate::parser::parse;
    use indoc::indoc;

    #[test]
    fn test_min_select() {
        let r = parse("select 1").formatted();
        let f = indoc! {r#"
            select
              1
        "#};
        assert_eq!(r, f);
    }

    #[test]
    fn test_min_select_from() {
        let r = parse("select a,b,c from d");
        dbg!(&r);
        let r = r.formatted();
        let f = indoc! {r#"
            select
              a
              , b
              , c
            from
              d
        "#};
        assert_eq!(r, f);
    }
}
