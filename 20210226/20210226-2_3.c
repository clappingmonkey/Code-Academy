#include <stdio.h>

/* Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера. */

int main(void){
    typedef long long int t_lNum;

    t_lNum num = 4000000000000;

    printf("%lld\n", num);

    t_lNum num1 = 3000000000000;

    t_lNum *t_point;
    t_point = &num1;

    printf("%lld\n", *t_point);

    return 0;
}