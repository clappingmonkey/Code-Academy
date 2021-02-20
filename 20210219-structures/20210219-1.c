#include <stdio.h>
#include <string.h>

/* Дефиниране на структура, достъп до членове */

struct tagPaper{
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};


int main(void){

    struct tagPaper stPaper;
    
    stPaper.m_nBookId = 123456;
    strcpy(stPaper.m_szTitle, "The Foundation");
    strcpy(stPaper.m_szAuthor, "Isaac Asimov");
    strcpy(stPaper.m_szSubject, "The distant future of the human kind living on multiple planets");

    printf("Paper id: %d\n", stPaper.m_nBookId);
    printf("Paper title: %s\n", stPaper.m_szTitle);
    printf("Paper author: %s\n", stPaper.m_szAuthor);
    printf("Paper subject: %s\n", stPaper.m_szSubject);

    return 0;
}