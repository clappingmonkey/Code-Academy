#include <stdio.h>

/* напишете функцията void lower(char s[]), която
преобразува главните букви в малки. */

void lower(char s[]);

int main(void){

    char s[] = "This Is A Test!";
    printf("The array in the begining is: %s\n", s);
    lower(s);


    return 0;
}

void lower(char s[]){
    int i = 0;
    char lowerer = 32; /* from the ASCII table */

    while(s[i] != '\0'){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i]+=lowerer;
        }
        i++;
    }
    printf("After the lowerer is: %s\n", s);
}