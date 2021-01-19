#include <stdio.h>

/* Упражнение 16. Оператор за вземане на адрес (&) и дереференция (*) */

int main()
{
    int iA = 13;
    int* pValueA = NULL;
    pValueA = &iA;

    int iB = 33;
    int* pValueB = NULL;
    pValueB = &iB;

    printf("\nAdress of variable A is: %p\n", pValueA);
    printf("\nValue of variable A is: %d\n", *pValueA);

    printf("\nAdress of variable B is: %p\n", pValueB);
    printf("\nValue of variable B is: %d\n", *pValueB);
    return 0;
}