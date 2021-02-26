#include <stdio.h>

/* Напишете макрос swap(t, x, y), койтo променя местата на двата аргумента
от тип t. */

#define swap(t, x, y) {t i = x; x = y; y = i;}

int main(void){

    int x = 3, y = 44;


    printf("The number values of x and y are %d and %d\n", x, y);

    swap(int, x, y);

    printf("After the swap:\n");
    printf("The number values of x and y are %d and %d\n", x, y);

    return 0;
}