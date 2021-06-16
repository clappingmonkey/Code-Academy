#include <stdio.h>
#include <stdlib.h>

/* Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I? */

void ifPalindrome(char *arr);

int main(int argc, char *argv[]){

    if(argc == 2){
        printf("The supplied argument is %s.\n", argv[1]);
    }
    else if( argc > 2){
        printf("Too many arguments supplied!\n");

        exit(2);
    }
    else {
        printf("No argument provided, only one expected!\n");

        exit(3);
    }

    ifPalindrome(argv[1]);

    return EXIT_SUCCESS;
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