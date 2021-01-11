#include <stdio.h>

/* the funciont for the addition  */
int res(int a, int b, int c){
    c = a + b;
	return c;
    }

int main(void){
    int a = 3;
    int b = 7;
    int c = 1;
    /* declaring int var and directly attaching the value from res */
    res(a,b,c);
    /* printing the value of a and b and last their result from addition */
    printf("The result of the addition between %d and %d is: %d\n", a, b, c);
    return 0;
}