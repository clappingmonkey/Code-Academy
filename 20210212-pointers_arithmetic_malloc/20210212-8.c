#include <stdio.h>
#include <stdlib.h>

/* Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free()). */

const char NEWLINE;
extern int g_lenght;

void arrValue(int *arr);

int main(void){
    int *arr = NULL;
    int i = 0;

    printf("Enter number of elements: ");
    scanf("%d", &g_lenght);

    arr = (int*)alloca(g_lenght * sizeof(int));

    if(NULL == arr){
        printf("Allocation error!!%c", NEWLINE);

        return 1;
    }

    arrValue(arr);

    for(i = 0; i < g_lenght; i++){
        printf("On position [%d] is %d with address: %p%c", i, arr[i], &arr[i], NEWLINE);
    }

    return 0;
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