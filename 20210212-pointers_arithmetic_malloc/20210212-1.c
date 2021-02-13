#include <stdio.h>

/* Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива. */

extern int g_lenght;

void addValForArr(int *s);
int sum_array(int *s);

int main(void){

    printf("Enter the number of elements in array: ");
    scanf("%d", &g_lenght);

    int s[g_lenght];

    printf("Enter numbers for value of array with size %d\n", g_lenght);

    addValForArr(s);

    sum_array(s);

    return 0;
}

int sum_array(int *s){
    int *point = s + g_lenght;
    int res = 0;

    while(s < point){
        res += *s;

        s++;
    }    
    return printf("The sum of the array is %d\n", res);
}

void addValForArr(int *s){
    int i = 0;

    for (; i < g_lenght; i++){
        printf("Enter value for %d element in the array: ", i);
        scanf("%d", &s[i]);
    }
}

int g_lenght = 0;