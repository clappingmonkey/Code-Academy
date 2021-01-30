#include <stdio.h>

const float PI = 3.14;

float faceSqr(float r);

int main(void){
    
    float r = 0.0;

    printf("enter value for R \n");
    scanf("%f", &r);

    printf("the face is %.2f\n", faceSqr(r));
    
}

float faceSqr(float r){
    return PI * (r * r);
}