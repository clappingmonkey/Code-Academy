#include <stdio.h>

/* Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf. */

int main(void){
    int a = 3;
    int *point = &a;

    printf("a address is %p, point address is %p\n", &a, point);

    return 0;
}