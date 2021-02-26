#include <stdio.h>

/* Изведете резултата от деленето на две цели
числа от тип int като double с преобразуване и без такова */

int main(void){
    int iValue = 47;
    int iDiv = 3;
    double dfRes = 0.0;
    int ifRes = 0;

    dfRes = (double)iValue / iDiv;
    ifRes = iValue / (double)iDiv;

    int *iPoint = (int*) &ifRes;

    printf("Value of dfResof: %lf, V/D: %d\n", dfRes, iValue / iDiv);
    printf("The value of iPoint is %d\n", *iPoint);

    return 0;
}