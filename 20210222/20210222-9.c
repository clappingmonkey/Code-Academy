#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача. */

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

    if(testE == VAR_STR){
        testU.m_a = atoi(testU.m_str);
        *testU = VAR_INT;
        print(&testU, &testE);
    }else if(testE == VAR_INT){
        itoa(testU.m_a, testU.m_str, 10);
        *pE = VAR_STR;
        print(&testU, &testE);
        
    }

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