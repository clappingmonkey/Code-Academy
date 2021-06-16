#include <stdio.h>

/* Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред. */

void reverse(char *arr, int i);

int main(void){
    char c;
    char arr[100];
    int i = 0;

    printf("Enter characters into array:\n");

    while((c = getchar()) != '\n'){
        arr[i] = c;
        i++;
    }

    reverse(arr, i);

    return 0;
}

void reverse(char *arr, int i){
    char *point = &arr[i-1];

    printf("The reversed array is: ");

    while(i >= 0){
        printf("%c", *point);
        point--;
        i--;
    }
}