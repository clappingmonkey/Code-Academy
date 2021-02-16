#include <stdio.h>

/* Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“ */

int main(void){
    char str[] = "Baba, kaka, mama";
    char *point = str;

    for(; *point != '\0'; point++){
        if(*point == 'a'){
            *point = 'o';
        }
    }

    printf("The final strin is %s\n", str);

    return 0;
}