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
void itoa(int n, char *s);
int altoi(char *s);
void reverse(char s[]);

int main(void){
    union sample testU;

    strcpy(testU.m_str, "12345");

    testU.m_a = 123;
    itoa(testU.m_a, testU.m_str);

    reverse(testU.m_str);

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
        printf("Error without a message. Just error.\n");
        break;
    }
}

int altoi(char *s){
    int res = 0;

    do{
        res *= 10;
        res +=(*s - '0');
        *s++;
    } while (*s != '\0');
    
    return res;
}

void itoa(int n, char *s){
    do{
        *s = (n % 10) + '0';
        n /= 10;
        *s++;        
    } while (n > 0);
}

void reverse(char s[]){
    char temp;
    int i = 0, j = strlen(s) - 1;

    for(; i < j; i++, j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}