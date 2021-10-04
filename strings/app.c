#include <stdio.h>
#include <string.h>

int main() {
    char * name = "Bob";

    printf("%lu\n", strlen(name));

    if (strncmp(name, "Yoni", 4) == 0) {
      printf("Hello, Yoni!\n");
    } else {
      printf("You are not Yoni. Go away.\n");
    }


    char dest[20]="Hello";
    char src[20]="World";
    strncat(dest,src,5);
    printf("%s\n",dest);
    strncat(dest,src,20);
    printf("%s\n",dest);

    return 0;
};
