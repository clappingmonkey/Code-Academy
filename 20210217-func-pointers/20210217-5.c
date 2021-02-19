#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни. */

int main(void){
    int arr[5][5];
    int *p = &arr[0][0];

    int i = 0;
    srand((unsigned)time(NULL));

    for(; i < 5 * 5; i++){
        *(p + i)= rand() % 11;
    }

    printf("All number stored in the array:\n");
    for (i = 0; i < 5 * 5; i++){
        printf("%d ", *(p + i));
    }

    printf("\n\nPrint all numbers in the range 1-5 and their position:\n");
    for(i = 0; i < 5 * 5; i++){
        if(*p >= 1 && *p <= 5){
            printf("%d on position %d\n", *p, i);
        }
        *p++;
    } 
    return 0;
}