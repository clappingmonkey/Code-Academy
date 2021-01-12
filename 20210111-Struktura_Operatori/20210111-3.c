#include <stdio.h>

int iz4istiBitNa(int a, int ind);

int main(void){
    int a = 5;
    int ind = 2;
    printf("Change the byte value to 0 of number %d on position %d. The new number: %d\n", a, ind, iz4istiBitNa(a,ind));
    return 0;
}

int iz4istiBitNa(int a, int ind){
	int com = 1;
    a=a>>ind;
    a=a&com;
    return a;
}