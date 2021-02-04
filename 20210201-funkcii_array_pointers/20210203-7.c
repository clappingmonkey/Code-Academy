#include <stdio.h>

/* Напишете функция, която прави същото, както в задача
6, но е рекурсивна. */

int multi(void);

int main(void){

    printf("The result of every multiplication of every number between 1 to 30 is:\n");
    multi();

    return 0;
}

int multi(void){
    int a = 1, b = 30, res = 0;
    while (b > a){
        res = a * b;
        printf("The rez is: %d\n", res);
        a++;       
    }
    multi();
    return res;
}