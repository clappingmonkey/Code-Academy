#include <stdio.h>
#include <stdlib.h>

/* Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx' */

int strLenght(char *point);
void reverse(char *s);

int main(void){
    char *str;

    str = malloc(256);

    printf("Enter a string to reverse:\n");

    scanf("%[^\n]%*c",str);

    printf("The original string is:\n%s\n", str);

    reverse(str);

    printf("The reversed string is:\n%s\n", str);

    free(str);

    return 0;
}

int strLenght(char *point){
    int c = 0;

    while( *(point + c) != '\0'){
        c++;
    }
    return c;
}
void reverse(char *s){
    int lenght, c = 0;
    char *start, *end, temp;

    lenght = strLenght(s);
    start = s;
    end = s;

    for(;c < lenght - 1; c++){
        end++;
    }

    for(c = 0; c < lenght / 2; c++){
        temp = *end;
        *end = *start;
        *start = temp;

        start++;
        end--;
    }
}