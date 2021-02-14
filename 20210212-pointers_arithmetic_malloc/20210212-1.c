#include <stdio.h>
#include <stdlib.h>

/* Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива. */

const char NEWLINE;
extern int g_lenght;

void addValForArr(int *arr);
int sum_array(int *arr);

int main(void){
    int *arr = NULL;

    printf("Enter the number of elements in array: ");
    scanf("%d", &g_lenght);

    arr = malloc(g_lenght * sizeof(int));

    printf("Enter numbers for value of array with size %d%c", g_lenght, NEWLINE);

    addValForArr(arr);

    sum_array(arr);

    free(arr);

    return 0;
}

int sum_array(int *arr){
    int *point = arr + g_lenght;
    int res = 0;

    while(arr < point){
        res += *arr;
        arr++;
    }    
    return printf("The sum of the array is %d%c", res, NEWLINE);
}

void addValForArr(int *arr){
    int i = 0, temp;


    for (; i < g_lenght; i++){
        printf("Enter value for %d element in the array: ", i);
        scanf("%d", &temp);
        arr[i] = temp;
    }
}

int g_lenght = 0;
const char NEWLINE = '\n';