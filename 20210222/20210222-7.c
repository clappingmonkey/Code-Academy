#include <stdio.h>
#include <string.h>

#pragma pack(1)

/* Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана. */

union sample{
    char m_c[68];
    int m_a;
    float m_b;
};

int main(void){
    union sample test;

    test.m_a = 12;
    printf("test.m_a = %d\n", test.m_a);

    test.m_b = 3.7777;
    printf("test.m_b = %.4f\n", test.m_b);

    strcpy(test.m_c, "This is a test");
    printf("test.m_c = %s\n", test.m_c);

    return 0;
}