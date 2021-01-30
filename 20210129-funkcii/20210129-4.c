#include <stdio.h>

/* Напишете функция, която връща резултат a*2 + b*c.  */

int addFunc();

int main(void){
    
    printf("\nThe result of a*2 + b*c is %d\n", addFunc());

    return 0;
}

int addFunc(){
    int a, b, c = 0;
    int d = 2;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("\nEnter the value b: ");
    scanf("%d", &b);
    printf("\nEnter the value c: ");
    scanf("%d", &c);
    
    return a * d + b * c; 
}