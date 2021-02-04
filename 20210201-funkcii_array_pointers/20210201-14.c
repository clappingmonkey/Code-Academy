#include <stdio.h>

/* Напишете функция int getline(char s[],int lim), която чете ред в
s[] и връща дължината му */

int getline(char s[], int lenght);

int main(void){
    char s[]="This is a test\nfor the purpose\nof a test";
   /*  int lenght = sizeof(s) / sizeof(char); */

    printf("%d",getline(s,25));

    return 0;
}

int getline(char s[], int lenght){
    int i, counter = 0;

    while(i < lenght && s[i] != '\0'){
        counter++;
        if(s[i] == '\n'){
            printf("The first line of the array is: ");
            return counter;
        }
        i++;
    }
    printf("The whole thing is: ");
    return counter;
}