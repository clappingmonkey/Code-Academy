#include <stdio.h>

int main(void){
    int intValue = 24033;
    printf("The bytes of int with value %d is: %d\n",intValue, sizeof(intValue));
    float flValue = 97.332062;
    printf("The bytes of float with value %f is: %d\n",flValue, sizeof(flValue));
    short int siValue = 12000;
    printf("The bytes of short int with value %d is: %d\n",siValue, sizeof(siValue));
    unsigned long int uliValue = 955761615;
    printf("The bytes of unsigned long int with value %d is: %d\n",uliValue, sizeof(uliValue));
    return 0;
}