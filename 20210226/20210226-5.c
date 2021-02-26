#include <stdio.h>

/* Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата. */

int main(void){

    typedef int t_arr[2];

    t_arr arr = {2, 2};

    printf("The array contain of:\n");

    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}