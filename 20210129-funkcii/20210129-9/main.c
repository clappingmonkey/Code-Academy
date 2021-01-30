#include <stdio.h>
#include "f.h"

/* Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф 2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл. */


int main(void){
    int a, b = 0;

    printf("Enter value for a: \n");
    scanf("%d", &a);
    printf("Enter value for b: \n");
    scanf("%d", &b);
    multi(a,b);

    return 0;
}