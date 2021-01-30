#include <stdio.h>

/* Напишете програма на С, която чрез функция да обръща
десетични числа в двоични. */

void deciKumBin(int n);

int main(void){
    int A = 0;

    printf("Enter a number: ");
    scanf("%d", &A);
    printf("The binary number is:");
    deciKumBin(A);
    
    return 0;
}

void deciKumBin(int n){
    int j;
  
    for(int i = 31; i >= 0; i--){
        j = n >> i;        
        if(j & 1){
            printf("1");
        } else {
            printf("0");
            }
    }
}