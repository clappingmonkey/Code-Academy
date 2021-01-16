#include <stdio.h>

const float c_pi = 3.14159;
float liceOkr(float R);

int main(void) {
    float R = 1;
    printf("The face of a circle with radius %.0f is %f\n", R, liceOkr(R));
    R = 1.5;
    printf("The face of a circle with radius %.1f %f\n", R, liceOkr(R));
    R = 13;
    printf("The face of a circle with radius %0.f %f\n", R, liceOkr(R));
    return 0;

}

float liceOkr(float R){
    float lice;
    lice = c_pi * R * R;
    return lice;
}