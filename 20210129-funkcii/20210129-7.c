#include <stdio.h>

/* Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията. */

int faceRightTri(int a, int b);
int faceRectangle(int a, int b);


int main(void){
    int a, b = 0;

    printf("Enter value for the sides of triangle.\n\nEnter the value for A: ");
    scanf("%d", &a);
    printf("\nEnter the value for b: ");
    scanf("%d", &b);

    printf("The face of right angle triangle is %d\n", faceRightTri(a,b));
    printf("The face of rectangle with the same sides like the triangle is %d\n", faceRectangle(a,b));


    return 0;
}


int faceRightTri(int a, int b){
    return (a * b) / 2;
}

int faceRectangle(int a, int b){
    return a * b;
}