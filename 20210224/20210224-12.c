#include <stdio.h>

/*  Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
} */

#define GENERIC_MAX(x, y)((x > y) ? x : y)

int main(void){
    int iA = 2, iB = 33;
    float fC = 3.14, fD = 2.718;
    char cE = 'c', cF = 'w';

    printf("Generic max is = %d\n", GENERIC_MAX(iA, iB));
    printf("Generic max is = %f\n", GENERIC_MAX(fC, fD));
    printf("Generic max is = %c\n", GENERIC_MAX(cE, cF));
    
    return 0;
}