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

    printf("Enter number to check if it\'s odd or even: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\n%d is even\n", num);
    } else {
        printf("\n%d is odd\n", num);
    }
}