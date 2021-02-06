#include <stdio.h>

/* Напишете функцията void printStr(char *s) аргумент поинтер
към началото на стринга. Използвайте for цикъл и обходете стринга докато
не стигнете знака за на стринг '\0'. На ваяка итерация пристирайте всеки
един елемент на стринга с printf(“%с”, с). */
void printStr(char *s);

int main(void){
    char s[] = "123456";

    printStr(s);

    return 0;
}

void printStr(char *s){
    int i = 0;

    for (; s[i] != '\0'; i++){
        printf("%c", s[i]);
    }
}