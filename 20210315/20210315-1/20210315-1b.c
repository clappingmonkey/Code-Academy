#include <stdlib.h>
#include <stdio.h>

/* Напишете функцията за добавяне на елемент в дървото рекурсивно
с двоен пойнтер подаван като параметър: */

typedef struct node_t node_t;

typedef struct node_t{
    int data;
    node_t *next;
}node_t;

node_t *first;
node_t *last;

int write(int n);
int read(int *n);

int main(void){
    int n = 1;

    while(n){
        printf("Enter number: ");
        scanf("%d", &n);
        write(n);
    }

    while(read(&n)){
        printf("%d ", n);
    }




    return 0;
}

int write(int n){
    node_t *p = last;

    last = (node_t *)malloc(sizeof(node_t));

    if(!last){
        return 1;
    }

    last->data = n;
    last->next = NULL;

    if(p != NULL){
        p->next = last;
    }

    if(first == NULL){
        first = last;
    }

    return 0;
}

int read(int *n){
    if(first){
        *n = first->data;
        node_t * p = first;
        first = first->next;

        free(p);

        return 1;
    }else{
        return 0;
    }
}