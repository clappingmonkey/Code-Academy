#include <stdio.h>

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 7; i > 0; i = i >> 1 )
        (n & i)? printf("1"): printf("0");
    printf("\n");
}

int main(void){
    unsigned char z = 0;
    printf("z is: %d and in binary is: ", z);
    bin(z);
    signed char a = -10;
    printf("a is: %d and in binary is: ", a);
    bin(a);
    z = z + a;
    printf("The resulst of addition of z and a is: %d and in binary is: ", z);
    bin(z);
    return 0;
}