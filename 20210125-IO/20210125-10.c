#include <stdio.h>
#include <string.h> /* for the use of strlen */

/* Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред. */

void reverse(char arr[]);

int main(void){
    char c;
    char arr[240];
    int i = 0;

    while ((c = getchar()) != EOF){
        arr[i] = c;
        arr[i+1] = '\0';
        i++;
        if (c == '\n'){
            i = 0;
            reverse(arr);            
        }
    }
    return 0;
}

void reverse(char arr[]){
    char r[strlen(arr)];
    int i, j;
    for (i = 0, j = strlen(arr) - 1; i < strlen(arr); i++, j--){
        r[i]=arr[j];
        printf("%c\n", r[i]);
    }
   printf("\nTry with other input or exit with CTRL+D\n");
}