#include <stdio.h>

/* Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. */

int main(void){

    int s[5][5] = {0};
    int i, j;

    printf("Enter integer numbers for value of 2D array with size [5][5]\n");

    for(i = 0;i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Enter value for the %d row %d element: ", i, j);
            scanf("%d", &s[i][j]);
        }
    }
    
    printf("The 2D array with size [5][5] contain: ");

    for(i = 0;i < 5; i++){
        printf("\n");
        for (j = 0; j < 5; j++){
            printf("%d ", s[i][j]);
        }
    }    
    return 0;
}