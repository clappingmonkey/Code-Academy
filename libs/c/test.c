#include <stdio.h>
#include "head.h"

int main(void){
	int a = 1, b = 2, c = 3;

	printf("The result of addition of %d, %d and %d is %d\n", a, b, c, additionFunc(a, b, c));

	printf("Hello world\n");

	return 0;
}