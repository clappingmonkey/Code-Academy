#include <stdio.h>

/* Рекурсивна функция */

int RecursiveFun(int nA, int nB);

int main(void){

    printf("RecursiveFun: %d\n", RecursiveFun(5,7));

    return 0;
}

int RecursiveFun(int nA, int nB){
    int nValue = 1;

    if (nA > 1 && nB > 1){
        nValue += RecursiveFun(nA - 1, nB - 1);
    }
    return (nA + nB + nValue);
}