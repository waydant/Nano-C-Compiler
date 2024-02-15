a.out: lex.yy.c A4_31.tab.c A4_31.c
	gcc A4_31.tab.c lex.yy.c A4_31.c -lm

lex.yy.c: A4_31.l
	flex A4_31.l

A4_31.tab.c: A4_31.y
	bison -dtv A4_31.y

clean:
	rm A4_31.tab.h A4_31.tab.c lex.yy.c a.out A4_31.output

test:
	./a.out < A4_31.nc
