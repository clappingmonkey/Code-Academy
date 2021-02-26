#include <stdio.h>

/* Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти. */

#ifndef _MYHEADER_H_
#define _MYHEADER_H
#include "head.h"
#endif

int main(void){
    int a = 2, b = 33;

    printf("The sum of addition %d and %d is %d\n", a, b, Sum(a, b));
    printf("The sum of multiplication %d and %d is %d\n", a, b, Multi(a,b));
    
    return 0;
}

