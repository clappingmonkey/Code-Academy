#include <stdio.h>

/* Опитайте се да използвате колкото се може
повече неявни преобразувания на типове в С-и */

int main(void){

    char cValue = '0';
    short sValue = -(cValue + cValue);
    unsigned short usValue = -(cValue + cValue);
    int iValue = sValue;
    unsigned int uiValue = sValue;
    long lValue = iValue;
    unsigned long ulValue = iValue;
    float fValue = ulValue;
    double dfValue = ulValue;

    printf("%c, %u, %u\n", cValue, sValue, usValue);
    printf("%d, %d, %ld, %ld\n", iValue, uiValue, lValue, ulValue);
    printf("%f, %f\n", fValue, dfValue);
    
    return 0;
}