#include <stdio.h>

int main(void){
    double a = 4.9876543;
    long double b = 7.123456789012345678890;
    long double c = 18398458438583853.28;
    long double d = 18398458438583853.39875937284928422;
    printf("%.7f\n", a);
    printf("%.21Lf\n", b);
    printf("%.2Lf\n", c);
    printf("%.17LF\n", d);
    return 0;
}