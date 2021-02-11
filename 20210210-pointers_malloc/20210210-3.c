#include <stdio.h>

/* Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I? */

void ifPalindrome(char *arr);

int main(void){
    char arr[100];
    char c;
    int i = 0;

    printf("Enter characters into array:\n");

    while((c = getchar()) != '\n'){
        arr[i] = c;
        i++;
    }

    ifPalindrome(arr);

    return 0;
}

void ifPalindrome(char *arr){
    char *point, *temp;

    point = arr;

    while(*point != '\0'){
        ++point;
    }
    --point;

    for (temp = arr; point>= temp;){
        if(*point == *temp){
            --point;
            temp++;
        }else{
            break;
        }
    }

    if(temp > point){
        printf("The string is Palindrome\n");
    }else{
        printf("The string is not a Palindrome\n");
    }
}