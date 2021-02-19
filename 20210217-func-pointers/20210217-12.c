#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

extern int g_length;
extern int g_nLowLett;
extern int g_nCapLett;
extern int g_nNumbers;
extern int g_nSpecChars;

extern char lowLett[];
extern char capLett[];
extern char numbers[];
extern char specChars[];


void passGen(char *pass);

int main(void){
    char *pass = NULL;

    printf("Hello. Welcome to the ultimate password generator.\nHow long you like your passwords? ");
    scanf("%d", &g_length);

    pass = alloca(g_length + 1);

    again: printf("How many small letters you want in it? ");
    scanf("%d", &g_nLowLett);
    printf("How many capital letters you want in it? ");
    scanf("%d", &g_nCapLett);
    printf("How many number you want in it? ");
    scanf("%d", &g_nNumbers);
    printf("How many special characters you want in it? ");
    scanf("%d", &g_nSpecChars);

    int limit = g_nLowLett + g_nCapLett + g_nNumbers + g_nSpecChars;

    if(limit > g_length){
        printf("You have choiced more chacarters by group than the aready defined size of the password\n");
        goto again;
    }

    passGen(pass);

    while(*pass != '\0'){
        printf("%c", *pass++);
    }

    return 0;
}

void passGen(char *pass){
    int i = 0;
    srand((unsigned int)(time(NULL)));

    for(i = 0; i < g_nLowLett; i++){
        *pass  = lowLett[rand() % strlen(lowLett)];
        *(pass + (rand() % g_nLowLett));
        *pass++;
    }

    for(i = 0; i < g_nCapLett; i++){
        *pass = capLett[rand() % strlen(capLett)];
        *(pass + (rand() % g_nCapLett));
        *pass++;
    }

    for(i = 0; i < g_nNumbers; i++){
        *pass = numbers[rand() % strlen(numbers)];
        *(pass + (rand() % g_nNumbers));
        *pass++;
    }

    for(i = 0; i < g_nSpecChars; i++){
        *pass = specChars[rand() % strlen(specChars)];
        *pass++;
    }
    *pass = '\0';
}
int g_length = 0;
int g_nLowLett = 0;
int g_nCapLett = 0;
int g_nNumbers = 0;
int g_nSpecChars = 0;

char lowLett[] = "abcdefghijklmnopqrstuvwxyz";
char capLett[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char numbers[] = "0123456789";
char specChars[] = "/,.-+=~`<>:;?@&*^$#!";