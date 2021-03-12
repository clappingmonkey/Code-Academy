#include <stdio.h>
#include <stdlib.h>

/*  Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma...);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност. */

int main(void){

    FILE *fp = NULL;

    fp = fopen("test4.txt", "w");

    if(NULL == fp){
        printf("Error handling the file!!\n");
        return 1;
    }else{
        int a = fprintf(fp, "this is the way\n");
        fclose(fp);
        fp = NULL;

        printf("The save characters are %d\n", a);
    }

    return 0;
}