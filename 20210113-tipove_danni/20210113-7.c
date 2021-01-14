#include <stdio.h>

int main(void){
    short a = 24212;
    int b = -1357674;
    int c = 1357674;
    int d = -1357674000;
    unsigned int e = 3657895000;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%ld\n", e); /* lld защото само така ми го компилира без грешка на linux */
    return 0;
}