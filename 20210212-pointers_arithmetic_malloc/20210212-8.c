#include <stdio.h>
#include <stdlib.h>

/* Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free()) */

const char NEWLINE;

int main(void){
    unsigned uIdNum = 0;
    unsigned uNumOfElem = 0;
    int *piVal = NULL;
    int iSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &uNumOfElem);

    piVal = (int*)alloca(uNumOfElem * sizeof(int));

    if(NULL == piVal){
        printf("Allocation error!!%c", NEWLINE);

        return 1;
    }
    
    printf("%cAddress of iSum: %p, Pointer: %p%c", NEWLINE, &iSum, piVal, NEWLINE);
    printf("The elements after the alloca operation: ");

    for(uIdNum; uIdNum < uNumOfElem; uIdNum++){
        printf("%d ", *(piVal + uIdNum));
    }

    printf("%c%c", NEWLINE, NEWLINE);


    return 0;
}

const char NEWLINE = '\n';