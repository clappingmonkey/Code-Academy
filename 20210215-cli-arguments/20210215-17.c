#include <stdio.h>
#include <string.h>

/* Задача 17. Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.
https://www.tutorialspoint.com/c_standard_library/c_functi
on_memset.htm */

int main(void){
    char str1[] = "A string to be copied.";
    char str2[] = "0";
    char str3[] = "I am very good in strings coping!";
    char str4[] = "Test";

    printf("str4 in the beginning - %s\n", str4);

    memset(str4, 0, sizeof(str4));

    printf("str4 after the memset function -%s\n", str4);

    strcpy(str4, str1);

    printf("str4 after the strcpy function - %s\n", str4);

    return 0;
}