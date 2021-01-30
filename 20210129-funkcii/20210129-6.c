#include <stdio.h>

/* Напишете програма на С, която чрез функция да обръща
десетични числа в двоични. */

long deciKumBin(int num);

int main(void){
    int num = 0;

    printf("Enter a number: \n");
    scanf("%d", num);
    long A = deciKumBin(num);

    printf("The number  is %ld\n", A);
    
    return 0;
}

long deciKumBin(int num){
    int rem = 0;
    long binary, i = 0;
  
    while(num != 0) {
        rem = num % 2;
        num = num / 2;
        binary = binary + (rem * i);
        i = i * 10;
    }
    return binary;
}