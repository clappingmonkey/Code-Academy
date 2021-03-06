#include <stdio.h>
#include <stdlib.h>

/*  Напишете програма, която да създаде стек (LIFO) от 16 елемента, който
има следното API
int pop()
void push()
int top()
int isFull() */

int MAXSIZE = 16;
int stack[16];
int top = -1;
int isEmpty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(){
    if(top == MAXSIZE){
        return 1;
    }else{
        return 0;
    }
}

int peek(){
    return stack[top];
}

int pop(){
    int data;

    if(!isEmpty()){
        data = stack[top];
        top = top - 1;
        return data;
    }else{
        printf("Couldn\'t retrieve data, Stack is empty.\n");
    }
}

int push(int data){
    if(!isFull()){
        top = top + 1;
        stack[top] = data;
    }else{
        printf("Couldn\'t insert data, Stack is full.\n");
    }
}

int main(void){
    
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);
    push(5);
    push(9);
    push(1);
    push(12);
    push(111);

    printf("Element at top of the stack: %d\n", peek());
    printf("Elements: \n");

    while(!isEmpty()){
        int data = pop();
        printf("%d\n", data);
    }
    printf("Stack full: %s\n", isFull()?"true":"false");
    printf("Stack empty: %s\n", isEmpty()?"true":"false");

    return 0;    
}