#include <stdio.h>

/* Напишете програма, която преброява шпациите, табулациите и
новите редове. */

int main(void){
    char c;
    int count = 0;

    while ((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            count++;
        }
    }

    printf("The number of abs, spaces and new lines is - %d\n", count);
    return 0;
}