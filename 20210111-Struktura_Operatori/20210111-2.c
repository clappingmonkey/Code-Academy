#include <stdio.h>

int vzemiBitNa(int a, int ind);

int main(void){
    int a = 5;
    int ind = 2;
    vzemiBitNa(a, ind);
    printf("Number %d with byte position %d in it is with value - %d\n", a,  ind, vzemiBitNa(a,ind));
    return 0;
}

int vzemiBitNa(int a, int ind){
	int com = 1;
    a=a>>ind;
    a=a&com;
    return a;
}