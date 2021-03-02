#include <stdio.h>
#include <stdlib.h>

/* тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин. */

typedef struct node{
    int m_a;
    struct node *m_point;
}t_node;

int main(void){

    t_node *test = malloc(sizeof(t_node));

    printf("The memory size of test is %ld wtih address %p\n", sizeof(test), test );

    free(test);

    return 0;
}