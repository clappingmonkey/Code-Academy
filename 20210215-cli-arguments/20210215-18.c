#include <stdio.h>
#include <string.h>

/* Връщаме се на кода написан в задача 17. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране, дали
размерът на стринга, в който копираме, не е по-малък от размера на
стринга, от който копираме, и какво да се случва тогава. */

void backwrdCopy(char *str1, char *str4);

int main(void){

    char str1[] = "A string to be copied.";
    char str2[] = "0";
    char str3[] = "I am very good in strings coping!";
    char str4[] = "0";

    backwrdCopy(str3, str4);

    printf("%s\n", str4);

    return 0;
}

void backwrdCopy(char *str1, char *str4){
    int lenght = strlen(str1);

    str1 += lenght;
    str4 += lenght;

    while(lenght-- >= 0){
        *str4-- = *str1--;
    }
}