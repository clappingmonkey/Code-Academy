#include <stdio.h>

/* the funciont for the addition  */
int res(int a, int b);

int main(void){
    int a = 3;
    int b = 7;
    /* declaring int var and directly attaching the value from res */
    res(a,b);
    /* printing the value of a and b and last their result from addition */
    printf("%d\n",res(a,b));
    return 0;
}

int res(int a, int b){
    a+=b;
	return a;
    }