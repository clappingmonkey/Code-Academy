#include <stdio.h>
#include <stdlib.h>

/* Разширяване на заделена памет с realloc */

const char NEWLINE;

int main(void){
    int *piVal = NULL;
    unsigned uSize = 0;

    printf("\nEnter size: ");
    scanf("%u", &uSize);

    piVal = (int*)malloc(uSize * sizeof(int));

    if(NULL == piVal){
        printf("Allocation error!%c", NEWLINE);

        return 1;
    }

    printf("Addresses of allocated memory: %p%c", piVal, NEWLINE);

    printf("%cEnter new size: ", NEWLINE);
    scanf("%u", &uSize);

    piVal = realloc(piVal, uSize * sizeof(int));

    if(NULL == piVal){
        printf("Reallocation error!!%c", NEWLINE);
        
        return 2;
    }

    printf("Addresses of reallocated memory: %p%c", piVal, NEWLINE);
    free(piVal);

    return 0;
}

const char NEWLINE = '\n';