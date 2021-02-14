#include <stdlib.h>
#include <stdio.h>

/* Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите */

const char NEWLINE;
extern int g_lenght;

int main(void){
    int *arr = NULL;
    int i = 0, temp;

    printf("Enter number of elements: ");
    scanf("%d", &g_lenght);

    arr = (int*)malloc(g_lenght * sizeof(int));

    if(NULL == arr){
        printf("Allocation error!\n");
        return 1;
    }

    for(; i < g_lenght; i++){
        printf("Enter element value: ");
        scanf("%d", &temp);
        arr[i] = temp;
    }

    for(i = 0; i < g_lenght; i++){
        printf("On position [%d] is %d with address: %p%c", i, arr[i], &arr[i], NEWLINE);
    }

    printf("After the free operation:%c", NEWLINE);
    free(arr);
    for(i = 0; i < g_lenght; i++){
        printf("On position [%d] is %d with address: %p%c", i, arr[i], &arr[i], NEWLINE);
    }
    
    return 0;
}

int g_lenght = 0;
const char NEWLINE = '\n';