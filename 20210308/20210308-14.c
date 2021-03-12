#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви. */
void printer(FILE *file);

int main(void){
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    char c;

    fp1 = fopen("test4.txt", "r");
    fp2 = fopen("temp.txt", "w");

    if(NULL == fp1 || NULL == fp2){
        printf("Error handling the files!!\n");
        return 1;
    }else{
        while((c = fgetc(fp1)) != EOF){
            fputc(toupper(c), fp2);
        }

        fclose(fp2);
        fclose(fp1);
        fp2 = NULL;
        fp1 = NULL;

        rename("temp.txt", "test4.txt");
        fp1 = fopen("test4.txt", "r");
        if(NULL == fp1){
            printf("Error handling the files!!\n");
            return 1;
        }
        printer(fp1);
        fclose(fp1);
        fp1 = NULL;
    }
    return 0;
}

void printer(FILE *file){
    char chars;

    while((chars = fgetc(file)) != EOF){
        printf("%c", chars);
    }
}