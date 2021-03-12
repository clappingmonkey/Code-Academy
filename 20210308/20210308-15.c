#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред. */

void printer(FILE *file);

int main(void){
    FILE *fp = NULL;
    int count = 0, i = 0;

    fp = fopen("test4.txt", "r");

    if(NULL == fp){
        printf("Error handling the file!!\n");
        return 1;
    }else{
        printf("The original content of the files is:\n");
        printer(fp);
        printf("\n\nAnd in reversed way:\n");

        count = ftell(fp);

        while(i < count){
            i++;
            fseek(fp, -i, SEEK_END);
            printf("%c", fgetc(fp));
        }
        printf("\n");

        fclose(fp);
    }
    return 0;
}

void printer(FILE *file){
    char chars;

    while((chars= fgetc(file)) != EOF){
        printf("%c", chars);
    }
}