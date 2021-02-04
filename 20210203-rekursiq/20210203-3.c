#include <stdio.h>

/* Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1. */

int linSearch(int a[], int lenght, int num);
int printArr(int a[], int lenght);

int main(void){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int lenght = sizeof(a) / sizeof(int);
    int num = 0;

    printf("Please enter number to search in the array? ");
    scanf("%d", &num);

    linSearch(a, lenght, num);
    printArr(a, lenght);

    return 0;
}

int linSearch(int a[], int lenght, int num){
    int flag, i = 0;

    for(; i < lenght; i++){
        if(a[i] == num){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("\n The wanted number %d was found at %d position in the array\n", num, i+1);
    } else {
        printf("\nSorry the wanted number %d is not in the array\n", num);
        return -1;
    }
    return 0;
}

int printArr(int a[], int lenght){
    int i = 0;

    printf("The array contains of: ");
    for (; i < lenght; i++){
        printf("%d ", a[i]);
    }
    return 0;
}