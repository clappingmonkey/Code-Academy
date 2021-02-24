#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/* Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs */

const double PI = 3.141592;

struct sample{
    int m_a;
    char m_str[10];
    double m_b;
    enum{
        false,
        true
    }e;
};

int main(int argc, char *argv[]){
    srand((unsigned)time(0));
    int i = 0;
    char *str[] = {"test", "just test", "testing"};

/*     FILE *fp = fopen(argv[1], "w+");

    if(NULL == fp){
        printf("error handling file. break\n");
        return 1;
    } */

    struct sample test[20];

     for(i = 0; i < (sizeof(test) / sizeof(*test)); i++){
         test[i].m_a = rand() % 11;
         strcpy(test[i].m_str, str[rand() % (sizeof(str) / sizeof(*str))]);
         test[i].m_b = PI;
         test[i].e = i % 2;
    }

    printf("m_a, m_str, m_b, enum\n");

    for(i = 0; i < (sizeof(test) / sizeof(*test)); i++){
        printf("%d, %s, %lf, %d\n", test[i].m_a, test[i].m_str, test[i].m_b, test[i].e);
    }

/*     fclose(fp);

    (NULL == fp) ? printf("error handling file\n") : 0; */
    
    return 0;
}