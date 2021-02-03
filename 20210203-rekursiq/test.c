#include <stdio.h>

unsigned Factorial( unsigned uValue);

int main(void){

    printf("The factorial - %d\n", Factorial(3));

}

unsigned Factorial(unsigned uValue){
/*     if(uValue < 2){
        return 1; */
/*     } else { */
        return uValue * Factorial(uValue - 1);
/*     } */
}