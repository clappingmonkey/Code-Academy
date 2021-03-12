#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Създайте test1.txt файл в избрана от вас директория. Сложете някакви
данни в него на латиница - име, поздрав, брой. Отворете за четене.
Използвайте fgetc() , която взема само един char от файла. Направете
while цикъл, за да изпишете всички символи, проверявайте за край на
файл с EOF. Проверявайте дали файловият пойнтер не е NULL, ако е
NULL, изпишете грешка. */

int main(void){

    char c;

    FILE *fp = NULL;
    fp = fopen("test2.txt", "w");
    if(NULL == fp){
        printf("Error handling the file!!\n");
        return 1;
    }else{
        fwrite("Ventsi, Hello, 45", 1, strlen("Ventsi, Hello, 45"), fp);
    }
    fclose(fp);
    fp = NULL;

    fp = fopen("test2.txt", "r");
    if(NULL == fp){
        printf("Error handling the file!!\n");
        return 1;
    }else{
        while((c = fgetc(fp)) != EOF){
            putchar(c);
        }

        fclose(fp);
        fp = NULL;

    }

    return 0;
}