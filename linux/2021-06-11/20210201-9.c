#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    char s[6];

    if(argc == 2){
        printf("The supplied argument is %d.\n", n);
    }
    else if( argc > 2){
        printf("Too many arguments supplied!\n");

        return EXIT_FAILURE;
    }
    else {
        printf("Two arguments expected!\n");
    }

    itoa(n, s);

    return EXIT_SUCCESS;
}

void itoa(int n, char s[]){
    int i = 0;

    do{
        s[i] = (n % 10) + '0';
        n /= 10;
        i++;
    } while (n > 0);

    reverse(s);
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