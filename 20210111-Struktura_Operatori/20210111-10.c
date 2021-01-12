#include <stdio.h>

int premahniBit(int a, int n);

int main(void){
    int a = 500;
    int n = 6;
    printf("%d with bytes %d to be removed. New number is %d.\n", a, n, premahniBit(a,n));
    return 0;
}

int premahniBit(int a, int n){
    n++; /* това е за да премахне и включелтно избрания бит  */
    a=a>>n;
    return a;
}