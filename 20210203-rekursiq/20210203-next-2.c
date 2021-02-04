#include <stdio.h>

/* Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край. */

int printArr(int a[], int lenght);

int main(void){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int lenght = sizeof(a) / sizeof(int);

    printf("The array lenght is %d elements.\n", lenght);
    printArr(a, lenght);

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