#include <stdio.h>

int main(void){
    int a = 3;
    int b = 5;
    int c = a&b;
    int d = a|b;
    int e = a^b;
    printf("%d AND %d is %d\n",a, b, c);
    printf("%d OR %d is %d\n",a, b, d);
    printf("%d XOR %d is %d\n",a, b, e);
    return 0;
}