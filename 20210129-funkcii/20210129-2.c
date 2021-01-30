#include <stdio.h>

/* Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата: */

extern const float PI;

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

    printf("Enter value for R \n");
    scanf("%f", &r);

    printf("The face is %.2lf\n", faceSqr(r));    
}

const float PI = 3.14;