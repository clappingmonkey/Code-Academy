#include <stdio.h>

/* Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). */

void my_swap(int *a, int *b);

int main(void){
    int a = 3;
    int b = 4;

    printf("Originally a was %d and b was %d\n", a, b);

    my_swap(a, b);

    return 0;
}

void my_swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("After using the my_swap function a is %d and b is %d\n", a, b);

}