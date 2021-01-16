#include <stdio.h>

int main(void){
    char str[] = "Hello";
    printf("The original string is %s\n", str);
    char rts[5];
    rts[4] = str[0];
    rts[3] = str[1];
    rts[2] = str[2];
    rts[1] = str[3];
    rts[0] = str[4];
    rts[5] = str[5];
    printf("And after the change is %s\n", rts);
    return 0;
}