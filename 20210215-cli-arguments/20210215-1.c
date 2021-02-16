#include <stdio.h>
#include <stdlib.h>

/* Да напишем функция char *month_name(int n), която връща указател
към символен низ, съдържащ името на n-тия месец. Да декларираме въртешен static
масив от указатели, сочещ към стрингове съдържащи имената на месеците
static char *name[] = {
"Illegal month",
"January", "February", "March",
"April", "May", "June",
"July", "August", "September",
"October", "November", "December"
Декларирането на static масив в скоупа на функцията означава, че ще бъде
видимо името му в целия файл и ще продължи да живее и след излизане от скоупа на
функцията след края на програмата. Функцията връща указател към съответния месец,
отговарящ на параметъра n. */

char *month_name(int n);

int main(void){
    int n = 3;

    printf("%s\n", month_name(n));

    return 0;
}

char *month_name(int n){

    static char *name[] = {
        "Illegal month",
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    while( n < 1 || n > 12){
        return name[0];
    }

    return name[n];
}