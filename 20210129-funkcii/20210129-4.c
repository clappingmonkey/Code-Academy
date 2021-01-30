#include <stdio.h>

/* Напишете функция, която връща резултат a*2 + b*c.  */

int addFunc();

int main(void){
    
    printf("The result of a*2 + b*c is %d\n", addFunc());

    return 0;
}

int addFunc(){
    int a, b, c = 0;
    int d = 2;

    printf("Enter value for a \n");
    scanf("%d", &a);
    printf("Enter the value b \n");
    scanf("%d", &b);
    printf("Enter the value c \n");
    scanf("%d", &c);
    
    return a * d + b * c; 
}