#include <stdio.h>

/* Упражнение 10. Оператори за присвояване;
използвайте и други оператори за присвояване
 */

int main(void)
{
    int nResult = 11;
    int nX = 6;
    printf("Result = %d, X = %d\n", nResult, nX);
    nResult += nX;
    printf("Result += %d -> %d\n", nX, nResult);
    nResult = 1;
    nResult <<= nX;
    printf("Result <<= %d -> %d\n", nX, nResult);

    nResult *= nX;
    printf("Result *= %d -> %d\n", nX, nResult);
    nResult %= nX;
    printf("Result %%= %d -> %d\n", nX, nResult);
    nResult /= nX;
    printf("Result /= %d -> %d\n", nX, nResult);

    return 0;
}