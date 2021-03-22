#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "func.h"

/* Пренапишете Задача
2 от 05.03.2021г за Пощенските такси на дадена
куриерска фирма се определят според тежестта на пратките
(с точност до цял грам) и обема,
както е показано в таблицата.
При влизане в някоя функция отваряте файл за писане и
при успешно излизане от функцията
записвате във файла function_name() success . Т
ова го правим за всички функции. Ако има
някаква грешка записваме грешката във файла и
името на функцията. */

int main(void){

    fp = fopen("log.txt", "a");
    int n = 0, errnum;

    printf("Please enter how many packages you have: ");
    scanf("%d", &n);

    info *list = (info *)malloc(n * sizeof(info));
    arrayFuller(list, n);

    free(list);

    if(errno){
        errnum = errno;
        fputs(strerror(errnum), fp);
    }else{
        fputs("\nmain() success", fp);
    }
    fclose(fp);
    return 0;
}