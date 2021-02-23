#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* аправете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор. */

struct date{
    int m_day;
    int m_month;
    int m_year;
};

int main(void){
    srand((unsigned)time(0));
    int i = 0;

    struct date arr_date[10];

    for(; i < (sizeof(arr_date) / sizeof(arr_date[0])); i++){
        retry: arr_date[i].m_month = rand() % 13;
        if(arr_date[i].m_month == 0){
            goto retry;
        }

        retry2: if(arr_date[i].m_month == 2){
            arr_date[i].m_day = rand() % 29;
        }else{
            arr_date[i].m_day = rand() % 32;
        }

        if(arr_date[i].m_day == 0){
            goto retry2;
        }
        arr_date[i].m_year = rand() % 3001;
    }

    printf("\tThe dates are:\n\n");
    for(i = 0; i < (sizeof(arr_date) / sizeof(arr_date[0])); i++){
        printf("%d.%d.%d\n", arr_date[i].m_day, arr_date[i].m_month, arr_date[i].m_year);
    }
    return 0;
}