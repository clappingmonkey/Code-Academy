#include <stdio.h>
#include <stdlib.h>

/* Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време. */

int main(void){
    FILE *fp = NULL;
    fp = fopen("test6.txt", "r");
    char s[50];

    if(NULL == fp){
        printf("Error handling the file!!\n");
        return 1;
    }else{
        long fpos = ftell(fp);
        fgets(s, 50, fp);
        printf("The current position is: %ld. The beggining was: %ld\n", ftell(fp), fpos);
        fclose(fp);
        fp = NULL;
    }
    return 0;
}