#include <stdio.h>
#pragma pack(1)

/* Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1). */

struct sample{
    char m_c : 6;
    short int m_b : 3;
};

struct sample2{
    char m_c : 6;
    char m_c2;
    short int m_b : 3;
    short int m_b2;
};

int main(void){
    struct sample test = { .m_c = 'c', .m_b = 3};
    struct sample2 test2 = { .m_c2 = 'c', .m_b2 = 3};

    printf("short m_b = %d\n", test.m_b);
    printf("char m_c = %c\n", test.m_c);
    printf("The size of the struct = %ld\n", sizeof(test));

    printf("short m_b2 = %d\n", test2.m_b2);
    printf("char m_c2 = %c\n", test2.m_c2);
    printf("The size of the 2nd struct = %ld\n", sizeof(test2));

    return 0;
}