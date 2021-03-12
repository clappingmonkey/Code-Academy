#include <stdlib.h>
#include <stdio.h>

/* Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл). */
void printer(FILE *fp);

int main(void){
    char c;
    int num_line = 0, count = 0;

    FILE *fp1 = NULL;
    FILE *fp2 = NULL;

    fp1 = fopen("test5.txt", "rt");
    fp2 = fopen("test6.txt", "wt");

    if(NULL == fp1 || NULL == fp2){
        printf("Error handling the files!!\n");
        return 1;
    }else{
        printer(fp1);

        printf("\n\nWhich line you want to be removed? ");
        scanf("%d", &num_line);

        while((c = fgetc(fp1)) != EOF){
            if(c == '\n'){
                count++;
            }if((count + 1) != num_line){
                fputc(c, fp2);
            }
        }
        fclose(fp1);
        fclose(fp2);
        fp1 = NULL;
        fp2 = NULL;
    }
    return 0;
}

void printer(FILE *file){
    char chars;

    while((chars = fgetc(file)) != EOF){
        printf("%c", chars);
    }
    rewind(file);
}