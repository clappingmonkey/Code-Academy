#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
първият параметър е стринг, вторият параметър е брой символи, който
искаме да прочетем, освен ако не стигне терминиращия символ за край
на реда \n или \0 първо, третият е пойнтер към файла; */

int main(void){

    FILE *fp = NULL;
    char str[100];

    fp = fopen("test4.txt", "rt");

    if(NULL == fp){
        printf("Error handling file!!\n");
        return 1;
    }else{
        fgets(str, 100, fp);
        printf("%s", str);
        fclose(fp);
    }

    fp = NULL;

    return 0;
}