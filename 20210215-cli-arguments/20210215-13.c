#include <stdio.h>

/* Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length()); */

int str_lenght(char *c);

int main(void){
    char str[] = "This is a test";
    char *p = NULL;
    int lenght = 0;

    p = str;

    lenght = str_lenght(p);
    
    printf("The lenght of the string %s is %d characters.\n", str, lenght);

    return 0;
}

int str_lenght(char *c){
    int i = 0;

    while(*c != '\0'){
        c++;
        i++;        
    }
    return i;
}