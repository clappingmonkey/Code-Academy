#include <stdio.h>

/* Подравняване и пакетиране на структури */

struct tagTestA{
    char m_ch;
    short int m_si;
};

struct tagTestAP{
    char m_ch;
    short int m_si;
} __attribute__((packed));

struct tagTestB{
    char m_ch;
    short int m_si;
    int m_int;
    float m_fl;
    long m_long;
};

struct tagTestBP{
    char m_ch;
    short int m_si;
    int m_int;
    float m_fl;
    long m_long;
} __attribute__((packed));

int main(void){

    printf("sizeof(A) = %ld, sizeof(A-packed) = %ld\n", sizeof(struct tagTestA), sizeof(struct tagTestAP));
    printf("sizeof(B) = %ld, sizeof(B-packed) = %ld\n", sizeof(struct tagTestB), sizeof(struct tagTestBP));

    return 0;
}