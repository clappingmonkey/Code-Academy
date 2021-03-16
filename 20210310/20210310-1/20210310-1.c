#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"

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