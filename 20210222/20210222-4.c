#include <stdio.h>

/* Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина. */

struct date{
    int m_day;
    int m_month;
    int m_year;
};

int main(void){
    struct date contractdate = {31, 10, 2003};

    printf("The date is %d.%d.%d\n", contractdate.m_day, contractdate.m_month, contractdate.m_year);

    contractdate.m_month = 11;    
    printf("Afte the change the date is %d.%d.%d.\n", contractdate.m_day, contractdate.m_month, contractdate.m_year);

    struct date new = {.m_day = 22, .m_month = 2, .m_year = 2020};
    printf("Afte the change the date is %d.%d.%d.\n", new.m_day, new.m_month, new.m_year);

    return 0;
}