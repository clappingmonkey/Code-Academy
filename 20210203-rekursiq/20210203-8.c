#include <stdio.h>

/* Дефинирайте едномерен масив int с 10 елемента =
{100,90,80,70,60,50,40,30,20,10} Дефинирайте пойнтер, който ще сочи към
масива.
Достъпете 3 тия елемент от масива и му задайте стойност 5.
Достъпете 4 тия елемент и му задайте стойност 33.
Достъпете 5 тия елемент и го намалете със 7.
Достъпете 7 мия елемент и го увеличете с 10.
Достъпете 10 тия елемент и го умножете по 3.
Изпишете го по двата възможни начина и закоментирайте единия.
Принтирайте на екрана всички елементи на масива. */

int printArr(int a[], int lenght);

int main(void){
    int a[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int lenght = sizeof(a) / sizeof(int);

    int *pointer = NULL;
    pointer = &a;

    pointer[2] = 5;
    pointer[3] = 33;
    pointer[4] -= 7;
    pointer[6] += 10;
    pointer[9] *= 3;

    printArr(a, lenght);

    return 0;
}

int printArr(int a[], int lenght){
    int i = 0;

    printf("The array contains of: ");
    for (; i < lenght; i++){
        printf("%d ", a[i]);
    }
    return 0;
}