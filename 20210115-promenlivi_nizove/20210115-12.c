#include <stdio.h>

int main(void){
    char str[]= "Hello";
    printf("The original str string - %s\n", str);
    str[2] = 'x';
    str[3] = 'x';
    printf("Changed 2 and 3 position with x, the result - %s\n", str);
    return 0;
}