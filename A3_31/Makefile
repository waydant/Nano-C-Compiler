a.out:	lex.yy.c
		gcc lex.yy.c -lfl

lex.yy.c:	A3_31.l A3_31.c
			flex A3_31.l A3_31.c

clean:
		rm a.out lex.yy.c output.txt
	
test:
		./a.out < A3_31.nc >output.txt
