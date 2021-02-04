#include <stdio.h>
#include <string.h>

/* напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция) */

int any(char s1[], char s2[]);

int main(void){
    char s1[] = "Hello World";
    char s2[] = "Test o test";
    any(s1, s2);

}

int any(char s1[], char s2[]){
    char *ret;
    
    ret = strpbrk(s1, s2);

    if(ret != 0){    
        printf("First match: %c\n", *ret);
        return 0;
    } else {
        printf("Charare not found\n");
        return 1;
    }
}