#include <stdio.h>

/* принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double */


int main(void){

    char a[] = "abc";

    int b[] = {1, 2, 3};

    double c[] = {1.0, 2.5, 3.14, 4.55};

    printf("The size of arr a is %c\n", a[1]);
    printf("The size of arr a is %d\n", b[2]);
    printf("The size of arr a is %lf\n", c[3]);

    return 0;
}