#include <stdio.h>

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 7; i > 0; i = i >> 1 )
        (n & i)? printf("1"): printf("0");
    printf("\n");
}

int main(void){
    char a = 255;
    printf("a is: %d and in binary is: ", a);
    bin(a);
    int b = 140000;
    printf("b is: %d and in binary is: ", b);
    bin(b);
    char c = a + b;
    printf("The result from addition of a and b is: %d and in binary is: ", c);
    bin(c);
}