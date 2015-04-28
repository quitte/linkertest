#include <stdio.h>

void __attribute__((weak)) foo(){
	printf("weak foo\n");
}

void bar(){
        printf("strong bar from bar.c\n");
}

void __attribute__((weak)) baz(){
        printf("weak baz\n");
}

