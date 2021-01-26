#include <stdio.h>

/* Пребройте символите, подавани на конзолата, с
функцията
getchar(); */

int main(void){
    char c;
    int count = 0;
    
    while((c = getchar()) != EOF){        
        count++;
    }
    printf("\n Sum of entered symbols - %d\n", count);

    return 0;
}