#include <stdio.h>
#include <stdlib.h>

/* Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата */

extern int g_lenght;
const char NEWLINE;

void arrValue(int *arr);
void arrDestroyer(int *arr);
int arrResizer(int *arr);

int main(void){
    int *arr = NULL;
    int i = 0, temp;

    printf("Enter the number of elements in array: ");
    scanf("%d", &g_lenght);
    arr = malloc(g_lenght * sizeof(int));

    arrValue(arr);


    if(NULL == arr){
        printf("Allocation error!!%c", NEWLINE);

        return 1;
    }

    arrResizer(arr);

    arrDestroyer(arr);

    return 0;
}

void arrValue(int *arr){
    int i = 0, temp;

    printf("Enter numbers for value of array with size %d%c", g_lenght, NEWLINE);

    for(i = 0; i < g_lenght; i++){
        printf("Enter element value: ");
        scanf("%d", &temp);
        arr[i] = temp;
    }

    for(i = 0; i < g_lenght; i++){
        printf("On position [%d] is %d with address: %p%c", i, arr[i], &arr[i], NEWLINE);
    }
}

int arrResizer(int *arr){
    char choice;

    print_choice: printf("Would you want to resize the array?(y or n) ");
    scanf("%c", &choice);

    switch(choice){
    case 'y':
        printf("Enter the new size: ");
        scanf("%d", &g_lenght);

        arr = malloc(g_lenght * sizeof(int));       
         
        arrValue(arr);
        goto print_choice;

    case 'n':
        printf("Have a good day.%c", NEWLINE);
        break;

    default:
        printf("enter valid answer. y or n only, plesea%c", NEWLINE);
        goto print_choice;
    }
}

void arrDestroyer(int *arr){
    free(arr);
}

int g_lenght = 0;
const char NEWLINE = '\n';