#include <stdio.h>

int promBitNa(int a, int pos);

int main(void){
    int a = 50;
    int pos = 2;
    printf("Change the value of the byte of number: %d on position: %d.\nThe new number after the change is: %d\n", a, pos, promBitNa(a,pos));
    return 0;
}

int promBitNa(int a, int pos){
    int m = 1;
	m = m<<pos;
    a=a^m;
    return a;
}