#include <stdio.h>

/* Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4. */

void strCopy(char *str1, char *str4);

int main(void){

    char str1[] = "A string to be copied.";
    char str2[] = "0";
    char str3[] = "I am very good in strings coping!";
    char str4[] = "0";

    strCopy(str1, str4);

    printf("%s\n", str4);

    return 0;
}

void strCopy(char *str1, char *str4){
    int i = 0;

    while(*str1 != '\0'){
        *str4 = *str1;
        str1++;
        str4++;
    }
    *str4 = '\0';
}