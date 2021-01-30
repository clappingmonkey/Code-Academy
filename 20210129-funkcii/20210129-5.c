#include <stdio.h>

/* Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не. */

void evenOrNot();


int main(void){

    evenOrNot();

    return 0;
}


void evenOrNot(){
    int num = 0;

    printf("Enter number to check if it\'s odd or even \n");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
}