#include <stdlib.h>
#include <stdio.h>

/* Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това. */

const char NEWLINE;
extern int g_lenght;

void arrExtender(int *arr);

int main(void){
    int *arr = NULL;
    int i = 0, temp;

    printf("%cEnter number of elements: ", NEWLINE);
    scanf("%d", &g_lenght);

    arr = (int*)malloc(g_lenght * sizeof(int));

    if(NULL == arr){
        printf("Allocation error!!%c", NEWLINE);
        
        return 1;
    }

    for(i = 0; i < g_lenght; i++){
        printf("Enter element value: ");
        scanf("%d", &temp);
        arr[i] = temp;
    }

    for(i = 0; i < g_lenght; i++){
        printf("On position [%d] is %d with address: %p%c", i, arr[i], &arr[i], NEWLINE);
    }

    printf("%cEnter the new size: ", NEWLINE);
    scanf("%u", &g_lenght);

    arrExtender(arr);

    if(NULL == arr){
        printf("Reallocation error!!%c", NEWLINE);

        return 2;
    }

    for(i = 0; i < g_lenght; i++){
        printf("On position [%d] is %d with address: %p%c", i, arr[i], &arr[i], NEWLINE);
    }

    free(arr);
    
    return 0;
}

void arrExtender(int *arr){
    arr = realloc(arr, g_lenght * sizeof(int));
}

int g_lenght = 0;
const char NEWLINE = '\n';