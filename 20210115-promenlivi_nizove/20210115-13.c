#include <stdio.h>

int main(void){
    char str[] = "HELLO";
    printf("%s\n", str);
    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0';
    printf("%s\n", str);

    return 0;
}