#include <stdio.h>

/* Упражнение 11. Increment / decrement operators */

int main(void)
{
    int iCounter = 0;
    while (++iCounter < 3)
    {
        printf("Counter %d\n", iCounter);
        printf("++ Counter: %d\n", ++iCounter);
        printf("-- Counter: %d\n", --iCounter);
        printf("Counter ++: %d\n", iCounter++);
        printf("Counter --: %d\n", iCounter--);

        printf("++ Counter: %d\n", ++iCounter);
        printf("++ Counter: %d\n", ++iCounter);
        printf("++ Counter: %d\n", ++iCounter);
    }
    /* Q:Какво става, ако се препълни броячът?
    A: iCounter присвоява последната достигната стойност 
    и увеличава +1, защото проверката <3 е след
    увеличаването, като действие и цикала спира.
     */
    printf("Final value of iCounter: %d\n", iCounter);
    return 0;
}