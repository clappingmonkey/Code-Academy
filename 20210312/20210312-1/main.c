#include <stdio.h>
#include <stdlib.h>
#include "global.h"

/* Реализация на списък. 
Напишете програма, която добавя и изтрива елемент от списък по позиция в списъка. 
Използвайте следния елемент на динамичния списък:
typedef struct t_node { int m_nValue; t_node* m_pNext; } t_node; */

int main(void){
    init();

    add(6);
    add(7);
    add(8);
    add(2);

    printAfter(6);

    return 0;
}

