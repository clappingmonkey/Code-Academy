#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Напишете програма, която чете числа от един текстов файл и ги записва
в друг текстов файл */
int main(int argc, char *argv[]){

    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    char c;
    int num = 0;

    if(argc < 3){
        printf("\nUsage:\n > %s readFile.txt writeFile.txt\n\n", argv[0]);
    }else{
        fp1 = fopen(argv[1], "rt");
        fp2 = fopen(argv[2], "wt");

        if(NULL == fp1 || NULL == fp2){
            printf("Error handling the file!!\n");
            return 1;
        }

        while((c = getc(fp1)) != EOF){
            fscanf(fp1, "%d", &num);
            fprintf(fp2, "%d, ", num);
        }
        fclose(fp1);
        fclose(fp2);
        fp1 = NULL;
        fp2 = NULL;
    }
    return 0;
}