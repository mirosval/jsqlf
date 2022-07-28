ts-generate:
	cd tree-sitter-jsql && tree-sitter generate

ts-test-min:
	tree-sitter test -f 'min'

ts-test:
	cd tree-sitter-jsql && tree-sitter test

rs-test:
	cargo test

test: ts-test rs-test

dev:
	cargo watch -c -x 'test'


