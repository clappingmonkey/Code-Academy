#include <stdio.h>
#include <string.h>

/* Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът. */

int main(void){

    FILE *fp = NULL;
    fp = fopen("test.txt", "wt");

    if(NULL == fp){
        printf("Error handling the file!!\n");
        return 1;
    }else{
        fwrite("Ventsi, Hello, 45", 1, strlen("Ventsi, Hello, 45"), fp);
    }

    fclose(fp);

    fp = NULL;

    return 0;
}