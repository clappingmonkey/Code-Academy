#include <stdio.h>

/* Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. */

int main(void){
    int s[5] = {0};
    int i = 0, j = 0;

    for(;i < 5; i++){
        printf("Enter value for the %d element: ", i);
        scanf("%d", &s[i]);
    }
    
    printf("The array contain: ");
    
    for(;j < 5; j++){
        printf("%d\t", s[j]);
    }    
    return 0;
}