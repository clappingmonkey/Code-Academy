#include <stdio.h>

/* Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float. */

double averageVal(int *s);

int main(void){
    int s[5] = {0};

    printf("Enter numbers for value of array with size 5\n");
    printf("The average value of the array is: %f\n", averageVal(s));

    return 0;
}

double averageVal(int *s){
    int i = 0;
    double count = 0;

    for (; i < 5; i++){
        printf("Enter value for %d element in the array: ", i);
        scanf("%d", &s[i]);
        count += s[i];
    }
    return count / 5;
}