#include <stdio.h>

/* Дефиниране и използване на указател */

int main(void){
    int nValue = 13;
    int *pnValue = NULL;

    pnValue = &nValue;

    printf("Value = %d, *pnValue = %d, pnValue (hex) = %0x\n", nValue, *pnValue, pnValue);
    
    return 0;
}