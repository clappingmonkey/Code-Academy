#include <stdio.h>
#include <string.h> /* for the usr of strlen */

/* Напишете функция void reverse(char s[]), която обръща
низа char s[]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга. */

void reverse(char arr[]);

int main(){
    int c;
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
        printf("%c", r[i]);
    }
    printf("\nTry with other input or exit with CTRL+D\n");
}