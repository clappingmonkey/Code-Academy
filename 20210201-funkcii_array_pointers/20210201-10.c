#include <stdio.h>
#include <string.h>

/* Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[]. */

void itob(int num, char s[], int base);
void reverse(char s[]);

int main(void){
    int num = 10;
    char s[32] = {'0'};
    int b = 15;

    itob(num, s, b);
    printf("The number %d in hex is: %s\n", num, s);

    return 0;
}

void itob(int num, char s[], int base){
    int i = 0;
    char allHex[17] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    do{
        s[i] = allHex[num % base];
        num /= base;
        i++;
    } while ( num > 0);
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
 
}