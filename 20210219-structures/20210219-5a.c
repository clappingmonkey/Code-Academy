#include <stdio.h>

/* а) Направете поле 15 на 15, като принтирате тирета в конзолата. */
const int c_SIZE = 15;

int main(void){
    int arr1[c_SIZE][c_SIZE];
    int i, j;

    for (i = 0; i < c_SIZE; i++){
        for (j = 0; j < c_SIZE; j++){
            arr1[i][j] = '-';
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