#include <stdio.h>

const float c_pi = 3.14159;
float liceOkr(float R);
float liceElip(float A, float B);

int main(void) {
    float R = 1;
    float A = 2.3;
    float B = 3.7;
    printf("The face of a circle with radius %.0f is %f\n", R, liceOkr(R));
    R = 1.5;
    printf("The face of a circle with radius %.1f %f\n", R, liceOkr(R));
    R = 13;
    printf("The face of a circle with radius %.0f %f\n", R, liceOkr(R));
    printf("The face of a Ellipse with the value of A %.1f and value of B %.1f is %f\n", A, B, liceElip(A,B));
    return 0;

}

float liceOkr(float R){
    float liceOkrRez;
    liceOkrRez = c_pi * R * R;
    return liceOkrRez;
}

float liceElip(float A, float B){
    float liceElRez;
    liceElRez = c_pi * A * B;
    return liceElRez;
}