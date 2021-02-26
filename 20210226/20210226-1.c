#include <stdio.h>

/* Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте. */

typedef struct test{
    int m_x;
    int m_y;
} t_test;

int main(void){
    t_test t1 = {3, 5};

    printf("The number are %d, %d\n", t1.m_x, t1.m_y);

    return 0;
}