#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Използвайки предната задача, напишете програма, която да чете
от стандартния вход CSV формат на описаната структура и да
попълва масив от 20 структури. Пример: prog2 < structs20.cvs */

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
    int i = 0;

    FILE *fp = fopen(argv[1], "r");

    struct sample test[20];

    for(i = 0; i < (sizeof(test) / sizeof(*test)); i++){
        fscanf(fp, "%d,%s,%lf,%u", test[i].m_a, test[i].m_str, test[i].m_b, test[i].e);
    }

    for(i = 0; i < (sizeof(test) / sizeof(*test)); i++){
        printf("%d, %s, %lf, %d\n", test[i].m_a, test[i].m_str, test[i].m_b, test[i].e);
    }
    
    return 0;
}