#include <stdio.h>

/* Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата. */

struct date{
    unsigned short m_day:6;
    unsigned short m_month:6;
    unsigned short m_year:12;
};

void printer(struct date *pDate);
int confirmer(struct date *pDate);

int main(void){
    struct date test = {31, 10, 2020};

    confirmer(&test);

    struct date test2 = {32, 2, 2020};

    confirmer(&test2);

    return 0;
}

void printer(struct date *pDate){
    printf("Date %d.%d.%d\n", pDate->m_day, pDate->m_month, pDate->m_year);
}

int confirmer(struct date *pDate){
    if((pDate->m_day > 0 && pDate->m_day < 32) && (pDate->m_month > 0 && pDate->m_month < 13) && (pDate->m_year > 0)){
        if( (pDate->m_month == 2) && (pDate->m_day > 29)){
           printf("Invalid date\n"); 
        }else if( (pDate->m_month == 4) && (pDate->m_day > 31)){
           printf("Invalid date\n"); 
        }else if( (pDate->m_month == 6) && (pDate->m_day > 31)){
           printf("Invalid date\n"); 
        }else if( (pDate->m_month == 9) && (pDate->m_day > 31)){
           printf("Invalid date\n"); 
        }else if( (pDate->m_month == 11) && (pDate->m_day > 31)){
           printf("Invalid date\n"); 
        }
        printer(pDate);
    }else{
        printf("Invalid date\n");
        return 0;
    }
    return 0;
}