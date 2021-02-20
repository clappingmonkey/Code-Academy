#include <stdio.h>
#include <string.h>

/* Инициализиране на структура, вложени структури */

#define BUFSIZE 100

struct tagDetail{
    unsigned m_uAcadId;
    char m_szAcadName[BUFSIZE];
    char m_szAcadUrl[BUFSIZE];
};

struct tagCadet{
    unsigned m_uCadetId;
    char m_CadetNamer[BUFSIZ];
    float m_uAverageRating;
    struct tagDetail m_detail;
};


int main(void){

    struct tagCadet cadet = {1, "Ivan Ivanov", 5.52,
        {13, "Code Academy", "https://test.com/"}};

    printf("Cadet ID is %d\n", cadet.m_uCadetId);
    printf("Name is: %s\n", cadet.m_CadetNamer);
    printf("Rating (2-6) is: %.2f\n", cadet.m_uAverageRating);
    printf("Name is: %s\n", cadet.m_detail.m_szAcadName);
    printf("URL is: %s\n", cadet.m_detail.m_szAcadUrl);
    printf("Total ID num is: %d\n", cadet.m_detail.m_uAcadId);


    struct tagCadet cadet2 = {2, "Petar Petrov", 4.44,
        {16, "Code Academy", "https://test.com/"}};

    printf("Cadet ID is %d\n", cadet2.m_uCadetId);
    printf("Name is: %s\n", cadet2.m_CadetNamer);
    printf("Rating (2-6) is: %.2f\n", cadet2.m_uAverageRating);
    printf("Name is: %s\n", cadet2.m_detail.m_szAcadName);
    printf("URL is: %s\n", cadet2.m_detail.m_szAcadUrl);
    printf("Total ID num is: %d\n", cadet2.m_detail.m_uAcadId);

    return 0;
}