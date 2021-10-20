#include <stdio.h>

/* function declaration */
int foo(int bar);

int main() {
    /* calling foo from main */
    printf("The value of foo is %d\n", foo(29));
}

int foo(int bar) {
    return bar * 6;
}
