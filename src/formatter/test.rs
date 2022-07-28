#[cfg(test)]
mod test {
    use crate::{formatter::Formatted, parser::parse};
    use indoc::indoc;

    #[test]
    fn test_min_select() {
        let r = parse("select 1").formatted(&Default::default());
        let f = indoc! {r#"
            select
              1
        "#};
        assert_eq!(r, f);
    }

    #[test]
    fn test_min_select_from() {
        let r = parse("select a,b,c from d");
        let r = r.formatted(&Default::default());
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

    #[test]
    fn test_min_select_from_group_order_limit() {
        let r = parse("select a from b group by a order by a limit 10");
        dbg!(&r);
        let r = r.formatted(&Default::default());
        let f = indoc! {r#"
            select
              a
            from
              b
            group by
              a
            order by
              a
            limit
              10
        "#};
        assert_eq!(r, f);
    }

    #[test]
    fn test_min_select_where() {
        let r = parse("select a from b where (a = 1 and b = 'a') or c = 2");
        dbg!(&r);
        let r = r.formatted(&Default::default());
        print!("{}", &r);
        let f = indoc! {r#"
            select
              a
            from
              b
            where
              (
                a = 1
                and b = 'a'
              )
              or c = 2
        "#};
        assert_eq!(r, f);
    }
}
