#include <stdio.h>
#include <stdlib.h>

/* Реализация на списък. 
Напишете програма, която добавя и изтрива елемент от списък по позиция в списъка. 
Използвайте следния елемент на динамичния списък:
typedef struct t_node { int m_nValue; t_node* m_pNext; } t_node; */

typedef struct t_node{
    int m_data;
    t_node *m_next;
}t_node;

t_node *start;

void init();
int addAfter(int n, int k);
int add(int *data);
void printAfter(t_node *curr);
t_node* dellElemReturnAfter(int *n, int k);

int main(void){
    init();

    add(6);
    add(7);
    add(8);
    add(2);

    printAfter(6);


    return 0;
}

void init(){
    start = NULL;
}

int add(int *data){
    t_node *p = start;
    
    start = (t_node*)malloc(sizeof(t_node));
    if(!start){
        return -1;
    }

    start->m_data = data;
    start->m_next = p;
    return 0;
}

int addAfter(int n, int k){
    t_node *q;
    t_node *p = start;

    while(p->m_data != k){
        p = p->m_next;
    }

    q = (t_node*)malloc(sizeof(t_node));

    q->m_data = n;
    q->m_next= p->m_next;
    p->m_next = q;
    return 0;
}

t_node* dellElemReturnAfter(int *n, int k){
    t_node *p = start;
    t_node *q;

    while(p->m_data != k){
        if(p->m_next == NULL){
            return NULL;
        }else{
            q = p;
            p = p->m_next;
        }
    }
    *n = p->m_data;
    q->m_next = p->m_next;

    free(p);

    return q->m_next;
}

void printAfter(t_node *curr){
    t_node *p = curr;
    while(p != NULL){
        printf("%d,", p->m_data);
        p = p->m_next;
    }
}