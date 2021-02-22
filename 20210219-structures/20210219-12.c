#include <stdio.h>
#include <math.h>

/* Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати. */

struct TPoint{
    int x;
    int y;
};

float range(struct TPoint pointA, struct TPoint pointB);

int main(void){

    struct TPoint a = {7, 10};
    struct TPoint b = {4, 7};

    printf("The point A is with cordinates X = %d and Y = %d\n", a.x, a.y);
    printf("The point B is with cordinates X = %d and Y = %d\n", b.x, b.y);

    printf("The distance between point A and point B is %.4f\n", range(a, b));

    return 0;
}

float range(struct TPoint pointA, struct TPoint pointB){
    int ranX = pointB.x - pointA.x;
    int ranY = pointB.y - pointA.y;
    
    ranX *= ranX;
    ranY *= ranY;

    float range = sqrt(ranX + ranY);

    return range;
}