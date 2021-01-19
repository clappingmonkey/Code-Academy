#include <stdio.h>

int main()
{
    int x = 10;
    int y = 10;
    int true = x == y;
    int false = x != y;

    printf("The value of true is %d\n", true);
    printf("The value of false is %d\n", false);
    return 0;
}