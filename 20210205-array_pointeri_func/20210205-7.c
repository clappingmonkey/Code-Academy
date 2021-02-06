#include <stdio.h>
#include <string.h>

/* Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено. */
int strend(char *s, char *t);

int main(void){
    char s[] = "This is a test array";
    char t[] = "and this is second";

    printf("The first array contain: %s\n", s);
    printf("The secoond array contain: %s\n", t);

    printf("If the second is found in the first array will return 1 else will return 0\n");
    printf("The resulf: %d\n", strend(s, t));

    return 0;
}

int strend(char *s, char *t){
    int lenghtS = strlen(s);
    int lenghtT = strlen(t);
    int j = 0, i = lenghtS - lenghtT;

    if(lenghtS < lenghtT){
        return 0;
    }
    for(; i<= lenghtS; i++, j++){
        if(s[i] != t[j]){
            return 0;
        }
    }
    return 1;
}