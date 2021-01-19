#include <stdio.h>

/* Задача 9. Аритметични оператори */

int main(void)
{
    int iX = 13;
    int iY = 44;
    float fZ = 3.5;
    int iResult = 0;
    float fResult = 0.0;
    
    iResult = iX - iY;
    printf("%d - %d = %d\n", iX, iY, iResult);
    iResult = iY / iX;
    printf("%d / %d = %d\n", iY, iX, iResult);
    iResult = iY % iX;
    printf("%d / %d Remainder: %d\n", iY, iX, iResult);

    iResult = iX + iY;
    printf("%d + %d = %d\n", iX, iY, iResult);
    iResult = iX * iY;
    printf("%d * %d = %d\n", iX, iY, iResult);

    fResult = fZ + iX + iY;
    printf("%.1f + %d + %d = %.2f\n", fZ, iX, iY, fResult);
    fResult = fZ * iX * iY;
    printf("%.1f * %d * %d = %.2f\n", fZ, iX, iY, fResult);

    fResult = iX + iY + iResult;
    printf("%d + %d + %d = %.2f\n", iX, iY, iResult, fResult);
    fResult = iX * iY * iResult;
    printf("%d * %d * %d = %.2f\n", iX, iY, iResult, fResult);

    return 0;
}