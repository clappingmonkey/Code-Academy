#include <stdio.h>
#include "f.h"

/* Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. и използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания по-
горе начин. */

int main(void){
    int a, b = 0;
    printf("Enter value for a: \n");
    scanf("%d", &a);
    printf("Enter value for b: \n");
    scanf("%d", &b);

    printf("The result of a + b is - %d\n", add(a ,b));

    printf("The result of incrementing b is - %d\n", incr(b));



    return 0;
}