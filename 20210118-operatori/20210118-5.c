#include <stdio.h>

int main()
{
    int x = 1, y = 0;
    int z = y || x;
    printf("The value of Z is %d\n", z);

    printf("Init values: X = %d, Y = %d\n", x, y);
    /* тук х ще има стойност 3, защото действието се 
    извършва от ляво на дясно */
    x = 1 + 2, 2 * 3, 3 + 4;
    /* тук y ще има стройност 5, защото действието се 
    извършва от дясно на ляво, заради скобата */
    y = (7 * 8, 8 + 9, 9 - 4);
    printf("X = %d, Y = %d\n", x, y);
    return 0;
}