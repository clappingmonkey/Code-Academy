#include <stdio.h>

/* Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j. */

void our_strcat(char *s, char *t);

int main(void){
    char s[] = "This is test array";
    char t[] = " and this is second test";

    printf("The first array contain: %s\n", s);
    printf("The secoond array contain: %s\n", t);

    our_strcat(s, t);
    printf("After the merge the first contain: %s\n", s);

    return 0;
}

void our_strcat(char *s, char *t){
    int i = 0, j = 0;

    ==>

    for(; *s != '\0'; *s++);
    for(; *t != '\0'; *t++){
        *s = *t;
        *s++;
    }
        *s = '\0';
}