#include <stdio.h>

/* Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc -DDEBUG) */


void debugMsg(const char *pszMsg){
    #ifdef DEBUG
        printf("DEBUG: %s\n", pszMsg);
    #endif

}

int main(void){

    debugMsg("lalal");



    return 0;
}