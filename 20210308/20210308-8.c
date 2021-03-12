#include <stdio.h>
#include <stdlib.h>

/* Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл. */

int main(void){

    char *str = "\nThis is a test!";

    FILE *fp = NULL;
    fp = fopen("test4.txt", "a");

    if(NULL == fp){
        printf("Error handling the file!!\n");
        return 1;
    }else{
        fputs(str, fp);
        fputs("\tThis is also a test", fp);
        fclose(fp);
        fp = NULL;
    }

    return 0;
}