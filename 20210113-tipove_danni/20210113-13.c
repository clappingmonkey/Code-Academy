#include <stdio.h>

int main(void){
    char a;
    int b;
    long c;
    float d;
    double e;
    a = 'a';
    b = 102;
    c = 50000;
    d = 6;
    e = -48.907;
    printf("a is %c, b is %d, c is %ld, d is %.2f, e is %.3f\n", a, b, c, d, e);
    return 0;
}