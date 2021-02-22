#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "strAndFunc.h"

/* Използвайки предишното упражнение, опишете структурите и
прототипите на функциите в отделен заглавен файл с разширение *.h, a
телата на функциите в един или няколко *.c сорс файлове. */

int main(void){
    srand((unsigned)time(0));

    struct employee list[c_EmplSize];

    printf("\t\t\tThe list of 10 employees:\n\n");
    
    fillList(list);

    return 0;
}