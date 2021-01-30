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

int absoluteValue(int n){
    if(n < 0){
        n =  (-1) * n;
    }
    return n;
}

int sqrOfNum(int n){




}