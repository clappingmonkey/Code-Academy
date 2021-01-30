#include <stdio.h>

/* Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата. */

extern const float PI;

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

const float PI = 3.14;