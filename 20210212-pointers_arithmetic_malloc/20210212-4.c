#include <stdlib.h>
#include <stdio.h>

/* Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите */

extern const char NEWLINE;

int main(void){

    unsigned uIdNum = 0;
    unsigned uNumOfElem = 0;    
    int *piVal = NULL;
    int iSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &uNumOfElem);

    piVal = (int*)malloc(uNumOfElem * sizeof(int));

    if(NULL == piVal){
        printf("Allocation error!\n");
        return 1;
    }

    printf("\nAddress of iSum: %p, Pointer value: %p\n", &iSum, piVal);
    printf("Elements after the malloc operation: %u \n", uIdNum);
    printf("\nAllocated memory addresses: ");

    for (uIdNum = 0; uIdNum < uNumOfElem; uIdNum++){
        printf("%p, ", (piVal + uIdNum));
    }

    printf("%c%c", NEWLINE, NEWLINE);

    for (uIdNum = 0; uIdNum < uNumOfElem; uIdNum++){
        printf("Enter %dth element: ", uIdNum);
        scanf("%d", piVal + uIdNum);
        iSum += *(piVal + uIdNum);
    }
    
    printf("\nSum of elements: %d\n", iSum);
    free(piVal);
    
    return 0;
}

const char NEWLINE = '\n';