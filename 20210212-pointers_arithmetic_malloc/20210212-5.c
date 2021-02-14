#include <stdio.h>
#include <stdlib.h>

/* Разширяване на заделена памет с realloc */

const char NEWLINE;
extern int g_lenght;

void arrValue(int *arr);
void arrResizer(int *arr);

int main(void){
    int *arr = NULL;
    int i = 0;

    printf("Enter number of elements: ");
    scanf("%d", &g_lenght);

    arr = (int*)malloc(g_lenght * sizeof(int));

    if(NULL == arr){
        printf("Allocation error!\n");
        return 1;
    }

    arrValue(arr);

    for(i = 0; i < g_lenght; i++){
        printf("On position [%d] is %d with address: %p%c", i, arr[i], &arr[i], NEWLINE);
    }

    arrResizer(arr);

    for(i = 0; i < g_lenght; i++){
        printf("On position [%d] is %d with address: %p%c", i, arr[i], &arr[i], NEWLINE);
    }
    
    return 0;
}

void arrResizer(int *arr){
    printf("Enter new size: ");
    scanf("%d", &g_lenght);

    arr = realloc(arr, g_lenght * sizeof(int));

    arrValue(arr);
}

void arrValue(int *arr){
    int i = 0, temp;

    for(; i < g_lenght; i++){
    printf("Enter element value: ");
    scanf("%d", &temp);
    arr[i] = temp;
    }
}

int g_lenght = 0;
const char NEWLINE = '\n';