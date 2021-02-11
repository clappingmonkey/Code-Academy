#include <stdio.h>

/* Напишете програма, която сумира всички елементи на масив
намиращи се на четна позиция:
int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
Декларирайте пойнтер към първата нечетна позиция, инкрементирайте
пойнтера по подходящ начин, за да извършите сумирането. */

int main(void){
    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int lenght = sizeof(arr) / sizeof(arr[0]);
    int i = 0, evenSum = 0;

    int *p = arr;

    for(;i < lenght; i += 2){
        evenSum += p[i];
    }

    printf("\n The sum of the even number is %d\n", evenSum);
    return 0;
}