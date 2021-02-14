#include <stdio.h>
#include <stdlib.h>

/* Заделете динамично с malloc памет за char* buffer с размер  iSize = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта. */

const char NEWLINE;

int main(void){
    int c, count = 0, iSize = 2;
    char *buffer;

    buffer = malloc(sizeof(char) *  iSize);

    while((c = getchar()) != EOF){
        if(count ==  iSize - 1){
             iSize =  iSize * 2;
            buffer == realloc(buffer,  iSize);
        }
        buffer[count++] = c;
    }

    buffer[count] = '\0';
    printf("%s%c", buffer, NEWLINE);

    free(buffer);

    return 0;
}

const char NEWLINE = '\n';