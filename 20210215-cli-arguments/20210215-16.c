#include <stdio.h>
#include <string.h>

/* Направете същото, както в предишната задача, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема.
https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.h
tm */

int main(void){
    char str1[] = "A string to be copied.";
    char str2[] = "0";
    char str3[] = "I am very good in strings coping!";
    char str4[] = "0";

    strcpy(str4, str1);

    printf("%s\n", str4);

    return 0;
}