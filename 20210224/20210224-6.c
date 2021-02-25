#include <stdio.h>

/*  */

#define MY_PRINT ("%d") printf("TRACE:" __VA__ARGS);

int main(void){

    MY_PRINT("My lucky numbers are: %d, %d, %d, %d\n", 3, 7, 13, 23);

    return 0;
}