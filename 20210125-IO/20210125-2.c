#include <stdio.h>

/* Пребройте редовете, подадени чрез текст на конзолата.
Използвайте функцията getchar(); */

int main(void){
    char c;
    int countLines = 0;

    while((c = getchar()) != EOF){
        if(c == '\n') {
            ++countLines;
        }
    }
    printf("Lines number is - %d\n", countLines);

    return 0;
}