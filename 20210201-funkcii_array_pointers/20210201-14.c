#include <stdio.h>

/* Напишете функция int getline(char s[],int lim), която чете ред в
s[] и връща дължината му */

int getLine(char s[], int lenght);

int main(void){
    char s[]="This is a test for the purpose\nof a test";
    int lenght = sizeof(s) / sizeof(char);

    printf("The whole lenght of the array is %d\n", lenght);

    printf("%d\n",getLine(s, lenght));

    return 0;
}

int getLine(char s[], int lenght){
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