#include <stdio.h>

/* Задача 7: Условен оператор (?:) 
b) използвайте условния оператор за намиране на максималното от две числа
*/

int main(void)
{
    int nA = 0;
    printf("Enter value for A: ");
    scanf("%d", &nA);
    int nB = nA == 1 ? 2 : 0;
    int nC = nA > nB ? nA : nB;
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);
    printf("The bigger is %d\n", nC);

    return 0;
}