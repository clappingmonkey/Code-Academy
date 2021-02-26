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

    typedef t_node *t_ptr;

    t_node s = (t_ptr)malloc(sizeof(t_node));
    printf("%d\n", sizeof(s));

    free(s);

    return 0;
}