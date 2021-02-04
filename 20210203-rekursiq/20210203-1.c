#include <stdio.h>

/* декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr); */


int main(void){

    char a[] = {123};

    int b[] = {123};

    double c[] = {123};

    printf("The size of arr a is %d\n", sizeof(a));
    printf("The size of arr a is %d\n", sizeof(b));
    printf("The size of arr a is %d\n", sizeof(c));




    return 0;
}