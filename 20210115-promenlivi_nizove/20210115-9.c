#include <stdio.h>

int main(void) {
    char s[] = "Hi";
    int n;
    n = sizeof(s)/sizeof(s[0]);
    n--; /* Така премахване броенето на последния елемент в низа - \0 . */
    printf("number of : %d\n", n);
    return 0;
}