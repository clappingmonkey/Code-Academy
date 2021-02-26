#include <stdio.h>

/* Напишете макрос, който прави идентификатор на низ
(стринг) */

#define MY_STR(x) #x

int main(void){
    int nValue = 0;

    printf(MY_STR(nValue));

    return 0;
}