#include <stdio.h>

/* Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s */

void strnCpy(char *s, char *t, int num);

int main(void){
    char s[100];
    char t[] = "and this is second";
    int num = 0;

    printf("The second array contain: %s\n", t);
    printf("How many characters from second array you wish to copy to the first? ");
    scanf("%d", &num);

    strnCpy(s, t, num);
    printf("After the copy the first array contain: %s\n", s);

    return 0;
}

void strnCpy(char *s, char *t, int num){
    do{
        *s = *t;
        *s++, *t++, num--;
    } while (num > 0);
}