#include <stdio.h>
#include <stdlib.h>

/* Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата */

int *dynamic_array_int_init(unsigned uSize){
    return malloc(sizeof(int) * uSize);
}

void dynamic_array_int_deinit(int *piArray){
    free(piArray);
}

int *dynamic_array_int_resize(int *piArray, unsigned uOldSize, unsigned uNewSize){
    int *piNewArray = dynamic_array_int_init(uNewSize);
    memncpy(piNewArray, piArray, uOldSize * sizeof(int));
    dynamic_array_int_deinit(piArray);
    return piNewArray;
}




int main(void){




}