#include <stdio.h>
#include <string.h>

/* Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число. */

union sample{
    int m_a;
    char m_str[68];
};

enum desc{
    VAR_INT,
    VAR_STR
};

void print(union sample *pU, enum desc *pE);

int main(void){
    union sample testU;

    strcpy(testU.m_str, "This is a test");

    enum desc testE = VAR_STR;

    print(&testU, &testE);

    return 0;
}

void print(union sample *pU, enum desc *pE){
    switch(*pE){
    case VAR_INT:
        printf("%d\n", pU->m_a);
        break;

    case VAR_STR:
        printf("%s\n", pU->m_str);
        break;
    
    default:
        printf("Error without a message. Just error.");
        break;
    }
}
