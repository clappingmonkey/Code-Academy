#include <stdio.h>
#include <string.h>

/* Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга. */
void reverse(char s[]);

int main(void){

    char s[] = "This is a test!";

    printf("The array in the begining is: %s\n", s);

    reverse(s);

    return 0;
}

void reverse(char s[]){
    char temp;
    int i = 0, j = strlen(s) - 1;

    for(; i < j; i++, j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("The reversed array is: %s\n", s);
}