#include <stdio.h>

/* Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори) */

#define MY_CONCAT(x, y) x##y

int main(void){
    MY_CONCAT(print, f)("\nThis is a test\n");

    printf("%d\n", MY_CONCAT(2, 44));

    return 0;
}