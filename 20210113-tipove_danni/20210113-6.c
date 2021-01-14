#include <stdio.h>

int main(void){
    char a = -127;
    unsigned char b = 255;
    int c = 6237498;
    unsigned int d = 4294967292;
    unsigned long long e = -9000000000000775845;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%ld\n", d); /*  ld защото само така ми го компилира без грешка на linux */
    printf("%lld\n", e); 
    return 0;
}