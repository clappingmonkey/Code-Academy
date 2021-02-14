#include <stdio.h>
#include <stdlib.h>

/* Реализация на масив с променлива размерност
Тази задача е подобна на задача 2, където
използваме char масив. Тук може да използвате
друг тип. */

const char NEWLINE;

int main(void){

    char *piVal = NULL;
    int uSize = 0;

    printf("\nEnter size: ");
    scanf("%d", &uSize);

    piVal = (char*)malloc(uSize * sizeof(char));
    if(NULL == piVal){
        printf("Allocation of memory error!!%c", NEWLINE);

        return 1;
    }

    printf("Addresses of allocated memory: %p%c", piVal, NEWLINE);

    printf("\nEnter the new size: ");
    scanf("%d", &uSize);

    piVal = realloc(piVal, uSize * sizeof(char));

    if(NULL == piVal){
        printf("Reallocation of memory error!!%c", NEWLINE);

        return 2;
    }

    printf("The address of reallocated memory: %p%c", piVal, NEWLINE);
    free(piVal);

    return 0;
}

const char NEWLINE = '\n';