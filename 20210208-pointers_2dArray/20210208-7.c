#include <stdio.h>

/* Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината. */

extern int days[12];

int yearDay(int y, int m, int d);
int leap(int y);

int main(void){
    int y = 0, m = 0, d = 0;

    printf("Would you like to know which day of the year is specific date? Great, let\'s go!\n");
    printf("\nEnter the year first(only numbers): ");
    scanf("%d", &y);
    printf("Enter the month(only numbers): ");
    scanf("%d", &m);
    printf("Enter the day(only numbers): ");
    scanf("%d", &d);

    leap(y);

    printf("\nThe day of the date %d.%d.%d is %dth day of the year.\n", y, m, d, yearDay(y, m, d));

    return 0;
}

int yearDay(int y, int m, int d){
    int i = 0;
    int dayOfYear = 0;

    days[1] += leap(y);

    for(; i < (m - 1); i++){
        dayOfYear += days[i];
    }    
    dayOfYear += d;
    
    return dayOfYear;
}

int leap(int y){
    return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}

int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};