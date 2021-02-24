#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* НИзползвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура. */

union sample{
    int m_a;
    char m_str[68];
};

enum desc{
    VAR_INT,
    VAR_STR
};

struct myStruct{
    union sample m_union;
    enum desc m_enum;    
};

void print(struct myStruct *pU, enum desc *pE);


int main(void){
    struct myStruct testS;

    strcpy(testS.m_union.m_str, "12345");

    testS.m_union.m_a = 123;

    testS.m_enum = VAR_INT;

    print(&testS, &testS.m_enum);

    return 0;
}

void print(struct myStruct *pU, enum desc *pE){
    switch(*pE){
    case VAR_INT:
        printf("%d\n", pU->m_union.m_a);
        break;

    case VAR_STR:
        printf("%s\n", pU->m_union.m_str);
        break;
    
    default:
        printf("Error without a message. Just error.\n");
        break;
    }
}