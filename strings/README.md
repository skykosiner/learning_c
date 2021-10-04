# How do strings in c work?
- In c strings are usually a array of different charters using pointers

- ```char * name = "Yoni";``` means that you can change the item in the
  variable later. Pointer value
- ```char name[4] = "Yoni";``` mean that you can't change the value later
  and that the item in the string/array has to be 4 charters long. Local value

```c
if (strncmp(name, "Yoni", 4) == 0) {
  printf("Hello, Yoni!\n");
} else {
  printf("You are not Yoni. Go away.\n");
}
```

```man strncmp```

- strncmp compares the two strings which it is provided. The local is not taken
into acount (for a local-aware comparison, see strcoll(3)). It returns a
interger less than, equal to, or gerater then zero if s1 is found,
respecetvely, to be less then, to match, or be greater than s2.

```man strlen```

## Description
- strlen calculate the length of the string pointed to by s, excluding the
  terminating null byte ('\0')
## Return value
- The strlen function returns the number of bytes in the string pointed to by s

```man stncat```
## Description
-    The strcat() function appends the src string to the dest string,
     overwriting the terminating null byte ('\0') at the end of dest, and then
     adds a terminating null byte.  The strings may not overlap, and the dest
     string must  have enough space for the result.  If dest is not large
     enough, program behavior is unpredictable; buf‐ fer overruns are a
     favorite avenue for attacking secure programs.


## Return value
-  The strcat and strncat functions return a pointer to the resulting string
   dest.
