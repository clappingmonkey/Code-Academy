#include <stdio.h>

/* Направете два триъгълника с отместване. */

struct point{
    int m_x;
    int m_y;
};

const int SIZE = 20;

int main(void){
    int arr1[SIZE][SIZE];
    int i, j;

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            arr1[i][j] = '-';
        }
    }

    struct point a = {7, 8};
    struct point b = {10, 1};
    struct point c = {10, 7};

    for(i = c.m_x; i >= a.m_x; i--){
        for(j = b.m_y; j <=  c.m_y; j++){
            arr1[i][j] = '@';
        }
        b.m_y++;
        c.m_y--;
    } 
    
    struct point d = {7,10};
    struct point e = {10, 9};
    struct point f = {10, 15};

    for(i = f.m_x; i >= d.m_x; i--){
        for(j = e.m_y; j <=  f.m_y; j++){
            arr1[i][j] = '@';
        }
        e.m_y++;
        f.m_y--;
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