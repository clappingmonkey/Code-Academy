#include <stdio.h>

int main(void){
    unsigned char a = 10;
    printf("z is: %d\n", a);
    signed char b = -127;
    printf("a is: %d\n", b);
    signed char c = b + a;
    printf("The resulst of addition of %d and %d is: %d.\n",a ,b, c);
    return 0;
}