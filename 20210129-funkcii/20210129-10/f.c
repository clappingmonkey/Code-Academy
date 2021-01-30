#include <stdio.h>

int leastCommon( int a, int b){
    int max = 0;
    max = (a > b) ? a : b;
    while (1){
        if((max % a == 0) && (max % b == 0)){
            printf("\nLeast common multiple of %d and %d is %d\n", a, b, max);
            break;
        }
        ++max;
    }
    return max;
}

float absoluteValue(){

    float n = 0.0;
    
    printf("Enter number to return it\'s absolute value: ");
    scanf("%d", n);

    if(n < 0){
        n =  -1 * n;
        printf("The entered number is negative and it\'s absolute value is %f\n", n);
    } else {
        printf("The entered number is positive, it\'s absolute value is %f\n", n);
    }
    return n;
}

int sqrOfNum(int n){




}