#include <stdio.h>

int oburniNeChetBit(int a);

int main(void){
    int a = 60;
    printf("Change the value of the byte of number: %d on position:.\nThe new number after the change is: %d\n", a, oburniNeChetBit(a));
    return 0;
}

int oburniNeChetBit(int a){
    int m = 715827882;
    a=a^m;
    return a;
}