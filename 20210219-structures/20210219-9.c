#include <stdio.h>

/* Направете функця add(), която събира две точки. */

struct point{
    int m_x;
    int m_y;
};

struct rect{
    struct point a;
    struct point b;
};

struct point makePoint(int x, int y);
struct point add(struct point pointA, struct point pointB);

int main(void){
    int i, j;

    struct point pointA = makePoint(3, 7);
    struct point pointB = makePoint(10, 4);

    printf("The points have cordinates:\n");

    printf("Point A with cordinates X = %d and Y = %d\n", pointA.m_x, pointA.m_y);
    printf("Point B with cordinates X = %d and Y = %d\n", pointB.m_x, pointB.m_y);

    struct point pointC = add(pointA, pointB);

    printf("Point C with cordinates the sum of point A and B X = %d and Y = %d\n", pointC.m_x, pointC.m_y);

    return 0;
}

struct point makePoint(int x, int y){
    struct point point = {x , y};
    
    return point;
}

struct point add(struct point pointA, struct point pointB){
    return makePoint(pointA.m_x + pointB.m_x, pointA.m_y + pointB.m_y);
}