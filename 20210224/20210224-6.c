#include <stdio.h>
#include <stdarg.h>

/* Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ” */

#define MY_NUMBERS(...) printf("My lucky numbers are: %d, %d, %d, %d\n", __VA_ARGS__);

int main(void){

    MY_NUMBERS(3, 7, 13, 23);

    return 0;
}