#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Решете задачата за генериране на 6 буквена парола с
пойнтери. */

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
    char *point = chars;

    for(index = 0; index < 6; index++){
        printf("%c", point[rand() % (sizeof point--)]);
    }    
}