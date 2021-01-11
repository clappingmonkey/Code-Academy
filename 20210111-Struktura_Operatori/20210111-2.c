#include <stdio.h>

int vzemiBitNa(int a, int ind);

int main(void){
    int a = 5;
    int ind = 2;
    vzemiBitNa(a, ind);
    printf("%d\n", vzemiBitNa(a,ind));
    return 0;
}

int vzemiBitNa(int a, int ind){
	int com = 1;
    a=a>>ind;
    a=a&com;
    return a;
}