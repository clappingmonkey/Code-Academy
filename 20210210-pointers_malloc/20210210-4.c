#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата */

void passGen(void);
void menu(void);

int main(void){
    char choice;

    printf("Hey there. Here\'s a password for you. Take it.\n");

    while(1){
        passGen();
        
        printf("\nDo you like the password I gave you? (y or n) ");
        choice = getchar();

        if(choice == '\n'){
            choice = getchar();
        }
        
        if(choice == 'Y' || choice == 'y'){
            printf("Okay. Good day and god speed.\n");            
            break;
        }
    } 
    return 0;
}

void passGen(void){
    srand((unsigned int)(time(NULL)));

    char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int index = 0;

    for(index = 0; index < 6; index++){
        printf("%c", chars[rand() % (sizeof chars - 1)]);
    }    
}