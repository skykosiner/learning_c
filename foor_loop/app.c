#include <stdio.h>

int math(int number1, int number2, int number3, int number4) {
    return number1 + number2 + number3 * number4;
};

int main() {
    int nice = math(6,9,6,9);
    int i;

    for (i = 0; i < 10; i++) {
        printf("Hello world\n");
    };

    printf("nice %d\n", nice);

    return 0;
};
