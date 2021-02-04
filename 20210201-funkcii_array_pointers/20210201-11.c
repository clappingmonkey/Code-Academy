#include <stdio.h>

/* напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[] */

void squeeze(char s[], int c);

int main(void){

    char s[] = "Character 13";
    char c = 'a'; //a in decimal
    
    squeeze(s, c);

    return 0;
}


void squeeze(char s[], int c){
    int i = 0;
    int size = sizeof(s) / sizeof(s[0]); 

    for(; i < size; i++){
        if(s[i] = c){
            s[i] = s[i + 1];
        }
    }
    printf("The new array is: %s", s);
}