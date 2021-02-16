#include <stdio.h>

/* Дефинирайте променлива „а“, дeфинирайте пойнтер към
нея, присвоете му адреса на променливата. През пойнтера
задайте нова стойност = 5 на променливата „а“. Каква е
стойността на “а”? */

int main(void){
    int a = 0;
    int *point = &a;

    *point = 5;

    printf("a = %d with address %p, point = %d with address %p\n", a, &a, *point, point);

    return 0;
}