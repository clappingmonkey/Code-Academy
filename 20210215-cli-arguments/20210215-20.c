#include <stdio.h>

/* Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”. */

int main(void){
    char str[] = "I am a poor  programmer";
    char str2[] = "great ";
    char *point = &str[7];
    char *point2 = str2;

    do{
        *point++ = *point2++;
    } while (*point2);

    printf("The final strin is %s\n", str);

    return 0;
}