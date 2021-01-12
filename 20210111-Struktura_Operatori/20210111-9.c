#include <stdio.h>

int zanuliBit(int a);

int main(void){
    int a = 400;
    printf("number: %d and after attached value 0 to bytes 3-7 - %d\n", a, zanuliBit(a));
    return 0;
}

int zanuliBit(int a){
    int m = 248;
    m = ~m;
    a=a&m;
    return a;
}