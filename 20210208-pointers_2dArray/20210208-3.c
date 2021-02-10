#include <stdio.h>

/* Дефинирайте и инициализирайте тримерен масив с по 5
елемента (5 x 5 x 5). */

int main(void){

    int s[5][5][5] = {0};
    int i, j, k;

    printf("Enter integer numbers for value of 3D array with size [5][5][5]\n");
    printf("Have patience and brace yourself, please!\n");

    for(i = 0;i < 5; i++){
        for (j = 0; j < 5; j++){
            for (k = 0; k < 5; k++){
                printf("Enter value for the %d row %d column %d element: ", i, j, k);
                scanf("%d", &s[i][j][k]);
            }
        }
    }
    
    printf("The 3D array with size [5][5][5] contain: ");

    for(i = 0;i < 5; i++){
        printf("\n");
        for (j = 0; j < 5; j++){
            printf("| ");
            for (k = 0; k < 5; k++){
                printf("%d ", s[i][j][k]);
            }
        }
    }    
    return 0;
}