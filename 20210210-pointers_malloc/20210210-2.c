#include <stdio.h>
#include <string.h>

void reverse(char *arr);

int main(){
    int c;
    char arr[240];
    int i = 0;
    char *p = arr;

    while ((c = getchar()) != '\n'){
        arr[i] = c;
        arr[i+1] = '\0';
        i++;
        p++;

        if (c == '\n'){

            
            i = 0;
            reverse(arr);            
        }
    }
    return 0;
}