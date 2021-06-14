#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int counterDiffs = 0;
    int bitNum1, bitNum2 = 0;

    if(argc == 3){
        printf("The supplied arguments are %d and %d.\n", num1, num2);
    }
    else if( argc > 3){
        printf("Too many arguments supplied!\n");

        return EXIT_FAILURE;
    }
    else {
        printf("Two arguments expected!\n");
    }

    for (int i = 0; i < sizeof(int); i++){
        bitNum1 = (num1 >> i) & 1;
        bitNum2 = (num2 >> i) & 1;

        if (bitNum1 != bitNum2){
            counterDiffs++;
        }
    }
    printf("The differences between %d and %d are %d.\n", num1, num2, counterDiffs);

    return EXIT_SUCCESS;
}