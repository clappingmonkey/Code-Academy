#include <stdio.h>

/* the funciont for the addition  */
int res(int a, int b){
	return a+b;
}

int main(void){
    int a = 3;
    int b = 7;
    /* declaring int var and directly attaching the value from res */
    int c = res(a, b);
    /* printing the value of a and b and last their result from addition */
    printf("The result of the addition between %d and %d is: %d\n", a, b, c );
    return 0;
}