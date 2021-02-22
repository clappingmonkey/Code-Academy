#include <stdio.h>

/* Направете точка а(3, 4), като на това място принтирате @ */

struct point{
    int m_x;
    int m_y;
};

const int c_SIZE = 15;

int main(void){
    int arr1[c_SIZE][c_SIZE];
    int i, j;

    for (i = 0; i < c_SIZE; i++){
        for (j = 0; j < c_SIZE; j++){
            arr1[i][j] = '-';
        }
    }

    struct point a = {3, 4};
    arr1[a.m_x][a.m_y] = '@';

    printf("\nThe matrix is :\n");
    for (i = 0; i < c_SIZE; i++){
        for (j = 0; j < c_SIZE; j++){
            printf("%4c", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}