#include <stdio.h>
#include <stdlib.h>

/* Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */
const int MAXSIZE = 15;

int main(void){
    int arr[MAXSIZE + 1];
    int i = 0;
    
    arr[0] = 0;
    arr[1] = 1;

    int *p = &arr[2];

    printf("The Fibonacci series to %d position is:\n", MAXSIZE);

    for(i = 0; i < MAXSIZE; i++){
        *p = *(p - 1) + *(p - 2);
        *p++;
    }
    *p = '\0';
    p = arr;

    for(i = 0; i < MAXSIZE; i++){
        printf("%d ", *p++);
    } 
    return 0;
}