#include <stdio.h>

/* Напишете структура с потребителски тип key_t, която
съдържа символен низ и число. */

typedef struct t_struct{
    char m_str[10];
    int m_a;
}the_struct;

int main(void){

    the_struct test = {.m_a = 1, .m_str = "Hello"};

    printf("The number is %d and string is %s\n", test.m_a, test.m_str);
    
    return 0;
}