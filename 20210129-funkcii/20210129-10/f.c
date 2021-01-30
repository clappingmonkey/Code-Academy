#include <stdio.h>
#include <math.h>

int leastCommon( int a, int b){
    int max = 0;

    max = (a > b) ? a : b;
    while (1){
        if((max % a == 0) && (max % b == 0)){
            printf("\nLeast common multiple of %d and %d is %d\n\n", a, b, max);
            break;
        }
        ++max;
    }
    return max;
}

float absoluteValue(float N){

    if(N < 0){
        N =  (-1) * N;
    } else {
        N = N;
    }
}

int sqrOfNum(int c){
    float sqr = 0;

    if(c < 0){
        printf("\nThe number is negative and the result is -1\n");
        c = absoluteValue(c);
        sqr = sqrt(c);
        printf("\nMaking the negative number into positive and calculated square root, the result is %.4f\n", sqr);
    } else {
        sqr = sqrt(c);
        printf("\nSquare root of %d is %.4f\n", c, sqr);
    }
    return 0;
} 