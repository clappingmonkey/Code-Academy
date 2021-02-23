#include <stdio.h>

/* Дефиниране и инициализация на обединение */
#pragma pack(1)

union tagMyData{
    int m_nValue;
    float m_fValue;
    char m_szText[25];
} /* __attribute__((packed)); */;

int main(void){
    union tagMyData data = {255};


    printf("Memory size : sizeof(data) : %ld\n", sizeof(data));
    printf("nValue: %d, fValue: %f, Text: %s\n", data.m_nValue, data.m_fValue, data.m_szText);

    return 0;
}