#include <stdio.h>

/* Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност. */

int Sum(int *a, int *b);

typedef int (*t_Sum)(int *, int *);

int main(void){

    typedef int t_Num;
    typedef int t_Num2;

    t_Num num = 40;
    t_Num2 num1 = 33;

    typedef t_Num *t_point1;
    typedef t_Num2 *t_point2;

    t_point1 pointA = &num;
    t_point2 pointB = &num1;
    
    t_Sum pointSum = NULL;

    pointSum = &Sum;

    printf("The number are %d and %d\n",*pointA, *pointB);

    printf("The sum of them is %d\n", pointSum(pointA, pointB));

    return 0;
}

int Sum(int *a, int *b){
    return *a + *b;
}