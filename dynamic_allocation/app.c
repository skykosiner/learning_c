#include <stdio.h>
#include <stdlib.h>

int main() {
    typedef struct {
        char * name;
        int age;
    } person;

    person * myperson = (person *) malloc(sizeof(person));

    myperson.age = 14;
    myperson -> name = "yoni";

    printf("%s\n", myperson->name);

    free(myperson);

    return 0;
};
