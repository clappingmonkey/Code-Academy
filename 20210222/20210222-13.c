#include <stdio.h>

/* Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата. */

union sample{
    char m_c:3;
    unsigned short m_a:3;

};

int main(void){

    union sample test = {.m_c = 2};

    printf("m_c = %d\n", test.m_c);

    test.m_a = 3;

    printf("m_a = %d\n", test.m_a);

    printf("the size of the union = %ld\n", sizeof(test));

    return 0;
}