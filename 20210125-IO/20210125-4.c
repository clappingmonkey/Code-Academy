#include <stdio.h>

/* Напишете програма, която копира входа си на изхода, като
замества всеки низ от една или повече шпации, с една
единствена шпация. */

int main(void){
    char c;
    int flag = 0;

    while((c = getchar()) != EOF){
        if ((c == 32) && (flag == 1)){
            continue;
        } else if (c == 32){
            flag = 1;
            putchar(c);
        } else {
            putchar(c);
            flag = 0;
        }
    }
    return 0;
}