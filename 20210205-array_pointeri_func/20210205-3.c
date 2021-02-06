#include <stdio.h>

/* Какво е грешното на този код? */

void my_strcpy(char *t, char *s);
int printArr( char a[], int lenght);


int main(void){
    char s[] = "This is a test of array";
    char t[] = "A shorter test";
    int lenght_1 = sizeof(s) / sizeof(s[0]);
    int lenght_2 = sizeof(t) / sizeof(t[0]);

    printf("\nThe first array contain:\n");
    printArr(s, lenght_1);

    printf("\nThe second array contain:\n");
    printArr(t, lenght_2);

    my_strcpy(t, s);
    printf("\nAfter the copy the fist contain:\n");

    printArr(s, lenght_1);
    printf("\n");
    printArr(t, lenght_2);

    return 0;
}


void my_strcpy(char *t, char *s){

    for(; *t; *t++, *s++){
        *s = *t;
    }
}

int printArr(char a[], int lenght){
    int i = 0;

    for (; i < lenght; i++){
        printf("%c", a[i]);
    }
    return 0;
}