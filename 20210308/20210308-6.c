#include <stdlib.h>
#include <stdio.h>

/* Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметри-
спейс, неспейс, спецификатори; */

int main(void){

    FILE *fp = NULL;
    char *str[100];

    /* cat test4.txt
    testovete sa qki%    */

    fp = fopen("test4.txt", "r");

    if(NULL == fp){
        printf("Error handling the file!!\n");
        return 1;
    }else{
        fscanf(fp, "%[^\n]\n", *str);
        fclose(fp);
        printf("The content of the files is: %s", *str);
        fp = NULL;
    }

    return 0;
}