#include <stdio.h>


int AddDigit(int a, int b);

int main(void){
    int a = 3;
    int b = 5;
    int c = a&b;
    int d = a|b;
    int e = a^b;
    //AddDigit(a, b);
    printf("%d, %d, %d\n",c, d, e);
    return 0;
}

int AddDigit(int a, int b){
	a+=b;
    return a;
}