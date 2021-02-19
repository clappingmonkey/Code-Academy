#include <stdio.h>
#include <string.h>

/* Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ...."; */

int main(void){
    char str[] = "This is a string to test my idea for search in a char and ....";
    char c;
    int i = 0, count = 0;;

    printf("The string is:\n%s\n", str);
    printf("Enter letter for search in it: ");
    c = getchar();

    for(; str[i]; i++){
        if(str[i] == c){
            count++;
        }
    }

    printf("The letter %c is %d times in the string.\n", c, count);

    return 0;
}