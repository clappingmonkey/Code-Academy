#include <stdio.h>
#include "f.h"
#include <math.h>

/* апишете програма на С, която съдържа 3 функции,
изнесете прототипите им в отделен .h файл.
1.
Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2.
Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a.
Трябва да може да приеме като параметър float и да върне float.
b.
Тествайте с инт и float.
3.
Напишете функция, която калкулира корен квадратен от число.
a.
Проверете дали резултатът е отрицателно число и върнете -1.
b.
Използвайте втората си функция, за да обърнете числото в положително и
да намерите корен квадратен от него. */


int main(void){
    
    int a, b, c = 0;
    float N = 0;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("\nEnter value for b: ");
    scanf("%d", &b);

    leastCommon(a,b);

    printf("Enter number to return it\'s absolute value: ");
    scanf("%f", &N);
    
    printf("\nThe absolute number is %.2f\n", absoluteValue(N));

    printf("\nEnter number to calculate square of it: ");
    scanf("%d", &c);

    sqrOfNum(c);

    return 0;
}