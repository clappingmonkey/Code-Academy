#include <stdio.h>

/* the funciont for the addition  */
int AddDigit(int a, int b);

int main(void){
    int a = 3;
    int b = 7;
    AddDigit(a, b);
    /* printing the value of a and b and last their result from addition */
    printf("The result of the addition between %d and %d is: %d\n", a, b, AddDigit(a,b));
    return 0;
}

/* the body of the addition function */
int AddDigit(int a, int b){
	a+=b;
    return a;
}