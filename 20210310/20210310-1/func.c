#include <stdlib.h>
#include <stdio.h>
#include "func.h"

int g_pos = 0, g_breakLine1 = 0, g_breakLine2 = 0;

void compareFiles(FILE *file1, FILE *file2){
    char ch1 = getc(file1);
    char ch2 = getc(file2);
    int line = 1;

    while (ch1 != EOF && ch2 != EOF){
        g_pos++;
        if (ch1 == '\n' && ch2 == '\n'){
            line++;
            g_breakLine1 = ftell(file1);
            g_breakLine2 = ftell(file2);
            g_pos = 0;
        }if(ch1 != ch2){
            break;
        }
        ch1 = getc(file1);
        ch2 = getc(file2);
    }
    printf("Line on which the files are different: %d pos %d\n", line, g_pos);
    }