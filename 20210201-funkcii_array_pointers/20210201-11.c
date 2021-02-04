#include <stdio.h>

/* напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[] */

void squeeze(char s[], int c);

int main(void){

    char s[] = "Character 13";
    char c = 'a';

    printf("The original array is: %s\n", s);
    printf("After the removal of all the %c is: ", c);
    
    squeeze(s, c);

    return 0;
}


void squeeze(char s[], int c){
    int i = 0, flag = 0;
    do{
        if(s[i + flag] == c){
            flag++;
            continue;
        }
        s[i] = s[i + flag];
        i++;
    } while(s[i + flag] != '\0');
    s[i] = '\0';
    printf("%s",s);
}