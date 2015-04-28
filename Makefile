CFLAGS+=-Wall

all: main main2

libmy.a: foo.o bar.o
	ar rs $@ $^

main: libmy.a baz.o main.o
	gcc -o main $^

main2:
	gcc -o main2 *.c

clean: 
	rm *.a *.o main main2
