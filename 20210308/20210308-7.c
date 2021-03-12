#include <stdio.h>
#include <stdlib.h>

/* Напишете символ в текстов файл.
Int fputc(int ch, FILE *pfile);
Първият параметър е символът, който искаме да отпечатаме (изразен като
int, т.е. номер в ASCII таблицата), вторият е самия файл, в който ще пишем.
Ако е успешно, функцията връща това, което искаме да изпише.
При грешка функцията връща EOF.
putc () работи със същите аргументи, но е дефинирана като макрос в
стандартната библиотека. */

int main(void){

    FILE *fp = NULL;
    int ch = 33; /* Set the start to be from '!' */

    fp = fopen("test3.txt", "w");

    if(NULL == fp){
        printf("Error handling the file!!\n");
        return 0;
    }else{
        while(ch < 97){
            fputc(ch, fp);
            ch++;
        }
        fclose(fp);
        fp = NULL;
    }

    return 0;
}