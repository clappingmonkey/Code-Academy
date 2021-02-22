#include <stdio.h>

/* Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга. */

struct sample{
    int m_a;
    int m_b;
    struct sample *m_sample;
};

int main(void){

    struct sample test1;
    struct sample test2;

    test1.m_a = 3;
    test1.m_b = 6;

    test2.m_a = 4;
    test2.m_b = 8;

    printf("Original values:\n");
    printf("%d\n", test1.m_a);
    printf("%d\n", test2.m_a);

    test1.m_sample = &test2;
    test2.m_sample = &test1;

    printf("\nValues after the crossing with the pointer:\n");
    printf("%d\n", test1.m_sample->m_a);
    printf("%d\n", test2.m_sample->m_a);

    return 0;
}