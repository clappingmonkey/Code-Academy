#include <stdio.h>
#include <stdlib.h>

/* Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет. */

const char NEWLINE;

int main(void){
    unsigned uIdNum = 0;
    unsigned uNumOfElem = 0;
    int *piVal = NULL;
    int iSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &uNumOfElem);

    piVal = (int*)calloc(uNumOfElem, sizeof(int));

    if(NULL == piVal){
        printf("Allocation error!!%c", NEWLINE);

        return 1;
    }

    printf("%cAddress of iSum: %p, Pointer: %p%c",NEWLINE, &iSum, piVal, NEWLINE);

    for(uIdNum = 0; uIdNum < uNumOfElem; uIdNum++){
        printf("%d, ", *(piVal + uIdNum));
    }

    printf("%c%c", NEWLINE, NEWLINE);

    free(piVal);

    return 0;
}

const char NEWLINE = '\n';