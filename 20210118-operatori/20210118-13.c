#include <stdio.h>

/* Упражнение 13. Логически оператори
опитайте различни комбинации, следете приоритета на
операторите
 */

int main(void)
{
    int nA, nB, nX, nY = 0;

    printf("Enter value for A: ");
    scanf("%d", &nA);
    printf("Enter value for B: ");
    scanf("%d", &nB);
    printf("Enter value for X: ");
    scanf("%d", &nX);
    printf("Enter value for Y: ");
    scanf("%d", &nY);

    if ( nA > nB && nA !=0)
    {
        printf("&& Operator : Both conditions are true\n");
    }

    if (nX > nY || nY != 20)
    {
        printf("|| Operator: only one condition is true\n");
    }

    if ( ! (nA > nB && nB !=0))
    {
        printf(" ! Opearator : Both conditions are true\n");
    } else {
        printf("Both conditions are true\n");
    }

    if (nA > nB && nX !=22)
    {
        printf(" && Opearator : Both conditions are true\n");
    } else {
        printf(" && Operator: neither side is true\n");
    }

    if (nA!= nB || nY >=22)
    {
        printf(" || Opearator : Only one condition is true\n");
    } 
    return 0;
}