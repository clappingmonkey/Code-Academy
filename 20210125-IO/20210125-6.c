#include <stdio.h>

/* Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue. */

int main(void){
    char c;
    int countLetter, countNum = 0;

    while ((c = getchar()) != EOF){
        if(c>47 && c<58){
            countNum++;
            continue;
        }
        if ((c>64 && c<91) || (c>96 && c<123)){
            countLetter++;
        }
    }
    printf("The numbers are %d and the letters are %d\n", countNum, countLetter);
    
    return 0;
}