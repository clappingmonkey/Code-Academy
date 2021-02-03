#include <stdio.h>

/* Напишете функция, която изчислява произведението на
числата от 1 до 30. */

int multi(int a, int b);

int main(void){

    printf("The result of every multiplication of every number between 1 to 30 is\n");
    multi(1, 30);

    return 0;
}

int multi(int a, int b){
    int res = 0;
    while (b > a){
        res = a * b;
        printf("The rez is: %d\n", res);
        a++;        
    }
    return res;
}