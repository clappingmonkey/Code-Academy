#include <stdio.h>

int zanuliChetBit(int a);

int main(void){
    int a = 60;
    printf("Number %d with 0 value on all even bytes position is: %d\n", a, zanuliChetBit(a));
    return 0;
}

int zanuliChetBit(int a){
    int m = 715827882;
    a=a&m;
    return a;
}