#include <stdio.h>

/* Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа. */

int main(void){
    char c;
    char arr[240];
    int i = 0; 
 
    while ((c = getchar()) != EOF){
        arr[i] = c;
        arr[i+1] = '\0';
        i++;
        if (c == '\n' && i > 80){
            printf("%s\n", arr);
            i = 0;
            
        } else if (c == '\n'){
            i = 0;
            printf("The array is shorter than 80 characters.\nTry again or exit with CTRL+D.\n");
        } 
    }
}