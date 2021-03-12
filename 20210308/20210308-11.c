#include <stdio.h>
#include <stdlib.h>

/* Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t. */

int main(void){

    FILE *fp = NULL;
    fp = fopen("test6.txt", "r");

    char s[50];
    fpos_t a;

    if(NULL == fp){
        printf("Error handling the file!!\n");
    }else{
        fgetpos(fp, &a);
        fgets(s, 50, fp);
        printf("The current position is: %ld. The beggining was: %d\n", ftell(fp), a);
    }
    return 0;
}