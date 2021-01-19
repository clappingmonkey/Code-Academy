#include <stdio.h>

/* Задача 7: Условен оператор (?:) 
а) въведете стойност за nA с scanf
*/

int main(void)
{
    int nA = 0;
    printf("Enter value for A: ");
    scanf("%d", &nA);
    int nB = (nA == 1 ? 2 : 0);

    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);

    return 0;
}