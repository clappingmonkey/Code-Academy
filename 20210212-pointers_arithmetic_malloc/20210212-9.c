#include <stdlib.h>
#include <stdio.h>

/* Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това. */

const char NEWLINE;

int main(void){
    int *piVal = NULL;
    unsigned uSize = 0;

    printf("%cEnter size: ", NEWLINE);
    scanf("%u", &uSize);

    piVal = (int*)malloc(uSize * sizeof(int));

    if(NULL == piVal){
        printf("Allocation error!!%c", NEWLINE);
        
        return 1;
    }

    printf("Addresses of allocated memory: %p%c", piVal, NEWLINE);

    printf("%cEnter the new size: ", NEWLINE);
    scanf("%u", &uSize);

    piVal == realloc(piVal, uSize * sizeof(int));
    
    if(NULL == piVal){
        printf("Reallocation error!!%c", NEWLINE);

        return 2;
    }

    printf("The addresses of reallocated memory: %p%c", piVal, NEWLINE);

    free(piVal);
    
    return 0;
}

const char NEWLINE = '\n';