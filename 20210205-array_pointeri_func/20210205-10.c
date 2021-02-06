#include <stdio.h>
#include <string.h>

/* Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s. */

void strnCat(char *s, char *t, int num);

int main(void){
    char s[] = "This is test array";
    char t[] = " and this is second test";
    int num = 0;

    printf("The first array contain: %s\n", s);
    printf("The second array contain: %s\n", t);
    printf("How many characters from second array you wish to add to the first? ");
    scanf("%d", &num);

    strnCat(s, t, num);
    printf("After the merge the first array contain: %s\n", s);

    return 0;
}

void strnCat(char *s, char *t, int num){
    int j = 0;
    char *l = s + strlen(s);

    for(;j < num; j++, *l++, *t++){
        *l = *t;
    }
}