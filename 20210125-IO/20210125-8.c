#include <stdio.h>

/* Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът има букви и
цифри. Принтирайте с putchar(). Използвайте условните оператори, за
да премахнете последните шпациите и табулациите в стринга */

int main(void){
    char c;

    while ((c = getchar()) != EOF){
        if (!(c == 9 || c == 11 || c == 32)){
            putchar(c);
        }
    }
    return 0;
}