#include <stdio.h>

struct test{
    char m_c;
    unsigned short m_us;
};

struct test2{
    char m_c;
    unsigned short m_us;
} __attribute__((packed));

union test3{
    int m_iNum;
    float m_fRate;
    union test3 *puniNext;
};


int main(void){

    struct test a;
    struct test2 a2;

    union test3 uniVar = {0};
    union test3 *puniVal = &uniVar;

    uniVar.m_iNum = 13;
    puniVal->m_fRate = 6.78;

    int allSize = sizeof(a.m_c) + sizeof(a.m_us);
    int allSize2 = sizeof(a2.m_c) + sizeof(a2.m_us);

    printf("Size of test struct: %d\n", allSize);
    printf("Size of test struct: %d\n", allSize2);
    printf("Size of union test 3: %ld\n", sizeof(union test3));




    return 0;
}