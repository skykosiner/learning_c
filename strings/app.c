#include <stdio.h>

int main() {
    /*
     * char * name = "Yoni"; means that you can change the item in the variable
     * later char name[4] = "Yoni"; mean that you can't change the value later
     * and that the item in the string/array has to be 4 charters long
     */

    char * name = "Yoni";

    printf("%s\n", name);

    name = "test";

    printf("%s", name);
    return 0;
};
