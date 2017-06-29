.PHONY: all test clean

all: build/main.o build/quadratic_equation.o
	gcc build/main.o build/quadratic_equation.o -o bin/exam -lm

build/quadratic_equation.o: src/quadratic_equation.c src/quadratic_equation.h
	gcc -Wall -Werror -c src/quadratic_equation.c -o build/quadratic_equation.o -lm

build/main.o: src/main.c src/quadratic_equation.h
	gcc -Wall -Werror -c src/main.c -o build/main.o -lm

test: quadratic

quadratic: build/test/main.o build/test/quadratic_equation_test.o build/quadratic_equation.o
	gcc build/test/main.o build/test/quadratic_equation_test.o build/quadratic_equation.o -o bin/quadratic_equation_test -lm

build/test/main.o: test/main.c
	gcc -I src -I thirdparty -Wall -Werror -c test/main.c -o build/test/main.o -lm

build/test/quadratic_equation_test.o: test/quadratic_equation_test.c
	gcc -I src -I thirdparty -Wall -Werror -c test/quadratic_equation_test.c -o build/test/quadratic_equation_test.o -lm


clean:
	rm -rf build/*.o bin/exam build/test/*.o bin/quadratic_equation_test
