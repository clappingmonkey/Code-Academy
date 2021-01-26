#include <stdio.h>

/* Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът се принтира с
putchar(), като преобразува главните букви в малки. */

int main(void){
    char c;

    while ((c = getchar()) != EOF){
        if(c>64 && c<91){
            c+= 32;
        }
        putchar(c);    
    }
    return 0;
}