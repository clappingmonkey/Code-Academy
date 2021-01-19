#include <stdio.h>

int main()
{
    int x = 10;
    int y = 10;
    int true, false;

    true = ++x + x || y;
    printf("The value of true is %d\n", true);
    return 0;
}