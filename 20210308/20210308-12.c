#include <stdio.h>
#include <stdlib.h>

/* Изместете позицията си във файла 7 байта след началото, ползвайки fseek.
int fseek(FILE *pfile, long offset, int original);
Първият параметър е указател към файла, вторият и третият параметър
оказват къде точно искаме да отидем във файла.
Референтни точки с предварително дефинирани имена:
SEEK_SET- началото на файла
SEEK_CUR- текуща позиция
fseek(fp, -10L, SEEK_CUR); връща на зад от текупата 10 bytes.
SEEK_END- края на файла
fseek(fp,0L, SEEK_END);
При текстови файлове, вторият аргумент трябва да е стойността върната от
ftell()
За текстови файлови третият аргумент трябва да е SEEK_SET, за бинарни
файлове и просто число в байтове. */

int main(void){

    FILE *fp = NULL;
    fp = fopen("test6.txt", "r");

    if(NULL == fp){
        printf("Error handling the file!!\n");
        return 1;
    }else{
        printf("The current position in the file: %ld\n", ftell(fp));
        fseek(fp, 10, SEEK_SET);
        printf("After the move the current position is %ld\n", ftell(fp));
        fclose(fp);
        fp = NULL;
    }
    return 0;
}