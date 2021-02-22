#include <stdio.h>

/* Направете по подобен начин триъгълник: */

struct point{
    int m_x;
    int m_y;
};

const int SIZE = 15;

int main(void){
    int arr1[SIZE][SIZE];
    int i, j;

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            arr1[i][j] = '-';
        }
    }

    struct point a = {7, 8};
    struct point b = {10, 5};
    struct point c = {10, 11};
    arr1[a.m_x][a.m_y] = '@';
    arr1[b.m_x][b.m_y] = '@';
    arr1[c.m_x][c.m_y] = '@'; 

   for(i = b.m_x; i >= a.m_x; i--){
        for(j = b.m_y; j <=  c.m_y; j++){
            arr1[i][j] = '@';
        }
        b.m_y++;
        c.m_y--;
    } 

    printf("\nThe triangle is :\n");
    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            printf("%4c", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}