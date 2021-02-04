#include <stdio.h>

/* напишете функцията void lower(char s[]), която
преобразува главните букви в малки. */

void lower(char s[]);

int main(void){

    char s[] = "This Is A Test!";
    printf("The array in the begining is %s\n", s);
    lower(s);


    return 0;
}

void lower(char s[]){
    int i = 0;

    for(;s[i] != '\0'; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
        s[i] = s[i] + 32;
        }
    }
    printf("After the convert the new array is: %s\n", s); 
}