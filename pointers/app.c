#include <stdio.h>

int main() {
    /* define a local variable a */
    int a = 1;

    int b = 69420;

    /* define a pointer variable, and point it to a using the & operator */
    int * pointer_to_a = &a;

    int * nice = &b;

    printf("The value a is %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a);

    printf("The value a is %d\n", *nice);

    /* let's change the variable a */
    a += 69419;

    /* will print out 3 */
    printf("The value of a is now %d\n", a);
    printf("The value of a is now %d\n", *pointer_to_a);

    return 0;
}
