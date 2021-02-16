#include <stdio.h>
#include <stdlib.h>

/* Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл. */

int main(void){
    int arr[10][10][10];
    int *p_arr = &arr[0][0][0];

    float avg = 0, res = 0;;

    int i, j, k;
    for(i = 0; i < 10 * 10 * 10; i++){
        *p_arr = rand() % 105;
        res = *p_arr++;        
    }

    printf("The average of the average of the array is %0.3f", res / (10 * 10 * 10));

    return 0;
}