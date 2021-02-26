#include <stdio.h>

/* Използвайте предефинирани макроси */

int main(void){

    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("Line: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    printf("File: %s\n", __FILE__);

    return 0;
}