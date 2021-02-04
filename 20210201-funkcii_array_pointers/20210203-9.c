#include <stdio.h>
#include <string.h>

/* Използвайте do-while цикъл, за да напишете функцията void
itoa(int n, char s[ ]), която преобразува число в символен низ (обратната
функция на atoi). do-while цикълът e необходим, тъй като в масива s[ ] ще
трябва да се постави поне един символ, дори ако n е нула. Ако n = 123, за
да вземем последната цифра, трябва да разделим n по модул(%) на
основата на бройната система 10. За да получите чаръктър число, трябва
да съберете резултата с '0' т.е. 48. За да вземете следващото число, трябва
да разделите n на 10. Това продължава докато n е различно от нула. Това
генерира низа в обратен ред – 321, затова използваме функцията
reverse(char s[]); от задача 18 , за да обърнем низа. */

void itoa(int n, char s[]);
void reverse(char s[]);

int main(void){
    int n = 12345;
    char s[6];
    itoa(n, s);
    reverse(s);


    return 0;
}

void itoa(int n, char s[]){
    do{
        n %= 10;
        n += 0;

        
    } while (n != 0);
    


}

void reverse(char s[]){
    char temp;
    int i = 0, j = strlen(s) - 1;

    for(; i < j; i++, j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("The reversed array is: %s\n", s);
}