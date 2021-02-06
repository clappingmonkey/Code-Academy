#include <stdio.h>

/* Какво е грешното на този код? 
void my_strcpy(char *t, char *s){
for(; *t; t++, s++)
*s = *t;
}
*/

void my_strcpy(char *t, char *s);

int main(void){
    char s[100];
    char t[] = "A shorter test";

    printf("\nThe second array contain: %s\n", t);

    my_strcpy(t, s);
    printf("\nAfter the copy the fist contain: %s\n", s);
    printf("\nand the second contain: %s\n", t);

    return 0;
}

void my_strcpy(char *t, char *s){

    for(; *t; *t++, *s++){
        *s = *t;
    }
}