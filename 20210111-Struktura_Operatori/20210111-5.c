#include <stdio.h>

int obarniBitNa(int a, int pos);

int main(void){
    int a = 202;
    int pos = 3;
    printf("Change the value of the byte of number: %d on position: %d.\nThe new number after the change is: %d\n", a, pos, obarniBitNa(a,pos));
    return 0;
}

int obarniBitNa(int a, int pos){
    int m = 1;
	m = m<<pos;
    m = ~m;
    a=a&m;
    return a;
}