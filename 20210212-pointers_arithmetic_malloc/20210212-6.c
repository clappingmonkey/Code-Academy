#include <stdio.h>
#include <stdlib.h>

/* Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта. */

const char NEWLINE;

int main(void){
    int c, count = 0, size = 2;
    char *buffer;

    buffer = malloc(sizeof(char) * size);

    while((c = getchar()) != EOF){
        if(count == size - 1){
            size = size * 2;
            buffer == realloc(buffer, size);
        }
        buffer[count++] = c;
    }

    buffer[count] = '\0';
    printf("%s%c", buffer, NEWLINE);

    free(buffer);

    return 0;
}

const char NEWLINE = '\n';