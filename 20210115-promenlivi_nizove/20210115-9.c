#include <stdio.h>
#include <string.h>

int my_strlen(char s[]){
    int i = 0;
    while (s[i] != '\0');
    {
        i++;
    }
    return i;
}

int main(void) {
    int i;
    char s[] = "Hi";

}