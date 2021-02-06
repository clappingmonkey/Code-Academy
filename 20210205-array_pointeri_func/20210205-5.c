#include <stdio.h>

/* Напишете функцията void our_strcat(char *s, char *t), която
добавя (конкатенира) стринга t в края на стринга s. С един фор цикъл трябва
да се стигне до края на низа s и след това на всяка следваща трябва да се
копират елементите на низа t. Функцията strcat() предполага, че има
достатъчно в s за да се копират всички стойности на низа t, защото иначе
оператор за присвояване може да работи извън размера на масива и да
имаме грешка. Но не сме разгледали динамичното заделяне на памет с
malloc. */

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

    for(; s[i] != '\0'; i++);
    for(; t[j] != '\0'; j++){
        s[i] = t[j];
        i++;
    }
        s[i] = '\0';
}