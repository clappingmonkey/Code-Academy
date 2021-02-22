#include <stdio.h>

/* Направете функция struct point makepoint(int x, int y), която
създава две точки. */

struct point{
    int m_x;
    int m_y;
};

struct point makePoint(int x, int y);

int main(void){
    struct point pointA = makePoint(3, 7);
    struct point pointB = makePoint(10, 6);

    printf("The two points have cordinates:\n");

    printf("Point A with cordinates X = %d and Y = %d\n", pointA.m_x, pointA.m_y);
    printf("Point B with cordinates X = %d and Y = %d\n", pointB.m_x, pointB.m_y);

    return 0;
}

struct point makePoint(int x, int y){
    struct point point = {x , y};
    
    return point;
}