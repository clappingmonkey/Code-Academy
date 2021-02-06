#include <stdio.h>

/* Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност по-
малка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0 */

int our_strcmp(char *s, char *t);

int main(void){

    char s[] = "This is an array test";
    char t[] = "Second test";

    printf("The first array contain: %s\n", s);
    printf("The secoond array contain: %s\n", t);

    printf("If they\'re equal will return 0,\nif the first is bigger will return 1,\nif the second is bigger wil return -1\n");
    printf("The resulf of the compare: %d\n", our_strcmp(s,t));

    return 0;
}

int our_strcmp( char *s, char*t){
    int i = 0;

    while (s[i] != '\0' && t[i] != '\0'){
        if( s[i] == t[i]){
            return 0;
        } else if( s[i] < t[i]){
            return -1;
        } else if(s[i] > t[i]){
            return 1;
        }
        i++;
    }
}