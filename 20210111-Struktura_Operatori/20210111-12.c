#include <stdio.h>

int vdigniBit(int a);

int main(void){
    int a = 500;
    printf("%d is the original number and after the rise the number is: %d\n", a, vdigniBit(a));
    return 0;
}

int vdigniBit(int a){
    int m = 72;
    a=a|m;
    return a;
}