#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define ALPHA 26

/* Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. */

int strLenght(char *point);

int main(void)
{
    int length = 0, i = 0, j = 0, k = 0, c = 0;
    int count[ALPHA];
    int *p_count = count;

    char *str;

    str = alloca(256);

    printf("Enter a string to check the number of each letter used in it:\n");
    scanf("%[^\n]%*c", str);

    length = strLenght(str);

    printf("\nThe string contains these sumups of letters:");

    for(i = 0; i < ALPHA; i++){
        *(p_count + i) = 0;
    }
    for (i = 65; i < 90; i++){ /* 65-90 not magical numbers, the letters from the ASCII table */
        for(j = 0; j < length; j++){
            if(*(str + j) == toupper(i) || *(str + j) == tolower(i)){
                *(p_count + k) = ++c;
            }
        }
        k++;
        c = 0;
    }
    printf("\n");
    
    for(i = 65; i < 90; i++){/* 65-90 not magical numbers, the letters from the ASCII table */
        printf("%c ", i);
    }
    printf("\n");
    for(i = 0; i < (ALPHA - 1); i++){
        printf("%d ", *(p_count + i));
    }
    return 0;
}

int strLenght(char *point){
    int c = 0;

    while (*(point + c) != '\0'){
        c++;
    }
    return c;
}