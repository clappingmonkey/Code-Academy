#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort. */

int cmpfunc(const void * a, const void * b){
    return (*(int*)a - *(int*)b);
}

int main(void){
    char str[] = "This is a test";
    printf("The original string = %s\n", str);

    qsort(str, strlen(str), sizeof(char), cmpfunc);
    printf("After the sorting = %s\n", str);

    return 0;
}