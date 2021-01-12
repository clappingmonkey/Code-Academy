#include <stdio.h>

int AddDigit(int a, int b);

int main(void){
    int a = 3;
    int b = 7;
    printf("The result of the addition between %d and %d is: %d\n", a, b, AddDigit(a,b));
    return 0;
}

int AddDigit(int a, int b){
	a+=b;
    return a;
}