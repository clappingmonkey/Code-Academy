#include <stdio.h>

/* Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета. */

struct point{
    int m_x;
    int m_y;
};

struct rect{
    struct point a;
    struct point b;
};

struct point makePoint(int x, int y);

int main(void){
    int i, j;

    struct point pointA = makePoint(0, 0);
    struct point pointB = makePoint(15, 15);

    struct rect screen = {pointA, pointB};

    for(i = pointA.m_x; i < pointB.m_y; i++){
        for(j = pointA.m_y; j < pointB.m_x; j++){
            printf("%4c", '-');
        }
        printf("\n");
    }

    return 0;
}

struct point makePoint(int x, int y){
    struct point point = {x , y};
    
    return point;
}