#include <stdio.h>

void __attribute__((used))foo(){
	printf("strong foo from foo.c\n");
}

void __attribute__((weak)) bar(){
        printf("weak bar from foo.c\n");
}

void __attribute__((weak)) baz(){
        printf("weak baz from foo.c\n");
}

