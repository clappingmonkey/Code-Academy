#include <stdio.h>

/*  Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата. */

union sample{
    char m_c;
    int m_a;
    int m_b;
};

int main(void){
    union sample test;

    test.m_a = -7;
    printf("test.m_a = %d\n", test.m_a);

    test.m_b = 10;
    printf("test.m_b = %d\n", test.m_b);

    test.m_c = 'c';
    printf("test.m_c = %c\n", test.m_c);

    return 0;
}