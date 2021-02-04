#include <stdio.h>

/* Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[]. */

void itob(int n, char s[], int b);
void menu(int n, int b);

int main(void){
    int n, b = 0;
    char s[20];

    menu(n, b);




    return 0;
}

void itob(int n, char s[], int b){


}


void menu(int n, int b){
    printf("Enter whole number for the value of n: ");
    scanf("%d", &n);
    printf("\nEnter the base system for the conver 8, 2, 16: ");
    scanf("%d", &b);
}