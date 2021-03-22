#include <stdio.h>
#include <stdlib.h>
#include "global.h"

void init(){
    start = NULL;
}

int add(int data){
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

void dellElemReturnAfter(int *n){
    t_node *p = start;
    t_node *q;

    while(p->m_next != NULL){
            q = p;
            p = p->m_next;
        }

    *n = p->m_data;
    q->m_next = NULL;

    free(p);
}

void printAfter(t_node *curr){
    t_node *p = curr;

    while(p != NULL){
        printf("%d,", p->m_data);
        p = p->m_next;
    }
    printf("\n");
}