#include <stdio.h>

const float c_pi = 3.14159;
float liceOkr(float r);

int main(void) {
    float r = 1;
    printf("The face of a circle with radius 1 is %f\n", liceOkr(r));
    r = 1.5;
    printf("The face of a circle with radius 1.5 %f\n", liceOkr(r));
    r = 13;
    printf("The face of a circle with radius 13 %f\n", liceOkr(r));
    return 0;

}

float liceOkr(float r){
    float lice;
    lice = c_pi * r * r;
    return lice;
}