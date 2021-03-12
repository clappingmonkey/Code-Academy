#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compareFiles(FILE *file1, FILE *file2);

extern int g_pos, g_breakLine1, g_breakLine2;

int main(void){
    char c;
    FILE *fp1 = fopen("test1.txt", "r");
    FILE *fp2 = fopen("test2.txt", "r");


    if(fp1 == NULL || fp2 == NULL){
        printf("Erroor handling the files!!\n");
        exit(1);
    }

    compareFiles(fp1, fp2);
    fseek(fp1, +g_breakLine1, SEEK_SET);
    fseek(fp2, +g_breakLine2, SEEK_SET);

    printf("The lines that are different.\nIn the first file:\n");

    while((c = getc(fp1)) != '\n' && c != EOF){
        printf("%c",c);
        }

    printf("\n\nIn the second file:\n");

    while((c = getc(fp2)) != '\n' && c != EOF){
        printf("%c",c);
        }
        printf("\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}

void compareFiles(FILE *file1, FILE *file2){
    char ch1 = getc(file1);
    char ch2 = getc(file2);
    char c;
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

int g_pos = 0;
int g_breakLine1 = 0, g_breakLine2 = 0;