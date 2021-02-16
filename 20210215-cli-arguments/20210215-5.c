#include <stdio.h>

/* Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата). */

int main(void){
    int *point = NULL;
    int a = 34;

    point = &a;

    printf("a = %d with address %p, point = %d with address %p\n", a, &a, *point, point);

    return 0;
}