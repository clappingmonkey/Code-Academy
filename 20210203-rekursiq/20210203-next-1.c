#include <stdio.h>


int main(void){

    char a[] = {123};

    int b[] = {123};

    double c[] = {123};

    printf("The size of arr a is %ld\n", sizeof(a)/sizeof(a[0]) -1);
    printf("The size of arr a is %ld\n", sizeof(b));
    printf("The size of arr a is %ld\n", sizeof(c));




    return 0;
}