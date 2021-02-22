#include <stdio.h>

/* Попълнете правоъгълника с @ */

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
    struct point b = {7, 10};
    arr1[a.m_x][a.m_y] = '@';
    arr1[b.m_x][b.m_y] = '@';

    for(i = a.m_x; i <= b.m_x; i++){
        for(j = a.m_y; j <= b.m_y; j++){
            arr1[i][j] = '@';
        }
    }

    printf("\nThe matrix is :\n");
    for (i = 0; i < c_SIZE; i++){
        for (j = 0; j < c_SIZE; j++){
            printf("%4c", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}