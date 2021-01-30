#include <stdio.h>
#include "f.h"

int add(int a, int b){
    int c = a + b;

    printf("The result of a + b is %d\n", c);

    return c;
}

int sub(int a, int b){
    int c = a - b;

    add(a,b);

    printf("The result of a - b is %d\n", c);
    return c;
}

int multi(int a, int b){
    int c = a * b;

    sub(a,b);
    
    printf("The result of a * b is %d\n", c);
    return c;
}