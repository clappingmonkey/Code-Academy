#include <stdio.h>

/* принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double */


int main(void){

    char a[] = {123};

    int b[] = {123};

    double c[] = {1.0, 2.5, 3.14};

    printf("The size of arr a is %d\n", sizeof(a));
    printf("The size of arr a is %d\n", sizeof(b));
    printf("The size of arr a is %d\n", sizeof(c));

    printf("%s\n %d\n %f\n", a, b, c[2]);




    return 0;
}