#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIZE 12

void passGen(void);
extern char characters[];

int main(void){

    printf("Hello. Here\'s a 12 symbols long password:\n");

    passGen();

    return 0;
}

void passGen(void){
    int i = 0;
    srand((unsigned int)(time(NULL)));

    for(; i < SIZE; i++){
        printf("%c", characters[rand() % strlen(characters)]);
    }
    printf("\n");
}

char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";