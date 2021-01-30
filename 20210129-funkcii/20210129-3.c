#include <stdio.h>

/* Напишете функция, която връща резултат (а+в)*4. */

int addFunc();

int main(void){
    
    printf("The result of (a+b)*4 is %d\n", addFunc());

    return 0;
}

int addFunc(){
    int a, b = 0;
    int c = 4;

    printf("Enter value for a \n");
    scanf("%d", &a);
    printf("Enter the value b \n");
    scanf("%d", &b);
    
    return (a + b) * c; 
}