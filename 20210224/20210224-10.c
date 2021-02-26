#include <stdio.h>
#include <math.h>

/* Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0)); */

#define AVG(x, y) ((x + y)/ 2)

#define AVG_R(x, y, res) {for(i = x; i <= y; i++) {res += i;} res /= y - x;}

#define STEPPER(x, y, res)  {for(i = y, res = 1; i > 0; i--)\
                            {res *= x;}}

#define TOUPPER(a) a -= 32;

#define DISP(f, x) printf("sqrt of %d = %g\n", x, f(x));


int main(void){
    int a = 2, b = 6, i;
    float res = 0.0;
    char c = 'a';

    AVG_R(a, b, res)
    printf("The AVG of %d and %d is %d\n", a, b, AVG(a, b));
    printf("The AVG in range is %f\n", res);

    STEPPER(a, b, res);

    printf("%d upped by degree of %d is %g\n", a, b, res);

    TOUPPER(c);
    printf("The upper letter is %c\n", c);

    DISP(sqrt, 2);

    return 0;
}