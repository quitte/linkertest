#include <stdio.h>

void __attribute__((weak)) foo(){
	printf("weak foo from baz.c\n");
}

void __attribute__((weak)) bar(){
        printf("weak bar from baz.c\n");
}

void __attribute__((used))baz(){
        printf("strong baz from baz.c\n");
}

