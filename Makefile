CFLAGS+=-Wall

all: main main2 main3

libmy.a: foo.o bar.o
	ar rs $@ $^

main: baz.o libmy.a main.o
	gcc -L. -lmy -o main main.o baz.o

main2: libmy.a main.o
	gcc main.o -L. -lmy -o main2

main3:
	gcc -o main3 *.c

clean: 
	rm *.a *.o main main2 main3
