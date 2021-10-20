#include <stdio.h>

int main() {
  char dvorak[] = {'A', 'O', 'E', 'U'};
  char *pvowels = dvorak;
  int i;

  // Print the addresses
  for (i = 0; i < 5; i++) {
    printf("&dvorak[%d]: %p, pdvorak+ %d: %p, dvoark + %d: %p\n", i,
           &dvorak[i], i, pvowels + i, i, dvorak + i);
    }

    // Print the values
    for (i = 0; i < 5; i++) {
      printf("dvoark[%d]: %c, *(pdvoark + %d): %c, *(dvoark + %d): %c\n", i,
             dvorak[i], i, *(pvowels + i), i, *(dvorak + i));
    }

    return 0;
};
