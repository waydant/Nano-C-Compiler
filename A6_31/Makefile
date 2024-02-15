parser.out: lex.yy.o y.tab.o A6_31_translator.o A6_31_target_translator.o
	g++ lex.yy.o y.tab.o A6_31_translator.o A6_31_target_translator.o -lfl -o parser.out

A6_31_target_translator.o: A6_31_target_translator.cxx A6_31_translator.h
	g++ -c A6_31_target_translator.cxx

A6_31_translator.o: A6_31_translator.cxx A6_31_translator.h
	g++ -c A6_31_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

lex.yy.c: A6_31.l y.tab.h A6_31_translator.h
	flex A6_31.l

y.tab.c y.tab.h: A6_31.y
	bison -dty --report=all A6_31.y

libmylib.a: mylib.o
	ar -rcs libmylib.a mylib.o

mylib.o: mylib.c myl.h
	gcc -c mylib.c

clean:
	rm libmylib.a mylib.o A6_31_translator.o A6_31_target_translator.o lex.yy.* y.tab.* y.output *.s *.out *.o *.a

test: parser.out libmylib.a
	@echo "Generating assembly files\n"
	./parser.out ./InputFiles/test1 > ./OutputFiles/test1.out
	./parser.out ./InputFiles/test2 > ./OutputFiles/test2.out
	./parser.out ./InputFiles/test3 > ./OutputFiles/test3.out
	./parser.out ./InputFiles/test4 > ./OutputFiles/test4.out
	./parser.out ./InputFiles/test5 > ./OutputFiles/test5.out
	./parser.out ./InputFiles/test6 > ./OutputFiles/test6.out
	./parser.out ./InputFiles/test7 > ./OutputFiles/test7.out
	./parser.out ./InputFiles/test8 > ./OutputFiles/test8.out
	./parser.out ./InputFiles/test9 > ./OutputFiles/test9.out
	./parser.out ./InputFiles/test10 > ./OutputFiles/test10.out

	@echo "Compiling assembly files\n"
	gcc ./InputFiles/test1.s -L. -lmylib -no-pie -o test1
	gcc ./InputFiles/test2.s -L. -lmylib -no-pie -o test2
	gcc ./InputFiles/test3.s -L. -lmylib -no-pie -o test3
	gcc ./InputFiles/test4.s -L. -lmylib -no-pie -o test4
	gcc ./InputFiles/test5.s -L. -lmylib -no-pie -o test5
	gcc ./InputFiles/test6.s -L. -lmylib -no-pie -o test6
	gcc ./InputFiles/test7.s -L. -lmylib -no-pie -o test7
	gcc ./InputFiles/test8.s -L. -lmylib -no-pie -o test8
	gcc ./InputFiles/test9.s -L. -lmylib -no-pie -o test9
	gcc ./InputFiles/test10.s -L. -lmylib -no-pie -o test10

	@echo "Binaries generated.\n\n"
	@echo "Running test1:\n"
	@./test1
	@echo "Running test2:\n"
	@./test2
	@echo "Running test3:\n"
	@./test3
	@echo "Running test4:\n"
	@./test4
	@echo "Running test5:\n"
	@./test5
	@echo "Running test6:\n"
	@./test6
	@echo "Running test7:\n"
	@./test7
	@echo "Running test8:\n"
	@./test8
	@echo "Running test9:\n"
	@./test9
	@echo "Running test10:\n"
	@./test10
	