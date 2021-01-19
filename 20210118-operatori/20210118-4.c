#include <stdio.h>

int main()
{
    int x = 10;
    int y = 10;
    int true, false;

    true = ++x || y;
    printf("The value of true is %d\n", true);
    true = x && y & x << 1;
    printf("The value of true is %d\n", true);
    true = x && y ^ x << 1;
    printf("The value of true is %d\n", true);
    /* първо ще се извърши шифтването на ляво,
    след това побитовото И и накрая логическото И.
    Ще се принтира 1 като резултат */
    true = x&&y&x<<1;
    printf("The value of true is %d\n", true);
    /* първо ще се изръвши шифтването на ляво,
    след това XOR и накрая логическото И.
    Резултата ще бъде 1 */
    true = x&&y^x<<1;
    printf("The value of true is %d\n", true);
    return 0;
}