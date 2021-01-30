#include <stdio.h>

const float PI = 3.14;

float faceSqr(float r);
float area(void);

int main(void){
    area();
    
}

float faceSqr(float r){
    return PI * (r * r);
}

float area(void){
    float r = 0;

    printf("enter value for R \n");
    scanf("%f", &r);

    printf("the face is %.2lf\n", faceSqr(r));    
}