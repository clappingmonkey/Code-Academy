#include <stdio.h>
#include <stdlib.h>

/* Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете. */

int main(void){
    int count = 0;
    char c;

    FILE *fp = NULL;
    fp = fopen("test5.txt", "r");

    if(NULL == fp){
        printf("Error handling the file!!\n");
        return 1;
    }else{
        while((c = fgetc(fp)) != EOF){
            if(c == '\n'){
                count++;
            }
        }
        count++; /* because the last raw is submited like EOF not \n */
        fclose(fp);
        fp = NULL;
        printf("The lines in the file are: %d\n", count);
    }

    return 0;
}