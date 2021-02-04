#include <stdio.h>

/* Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е по-
малък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива. */

int printArr(int a[], int lenght);

int binarySearch(int a[], int lenght, int num);

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int lenght = sizeof(a) / sizeof(int);
    int num = 0;

    printf("Please enter number to search in the array? ");
    scanf("%d", &num);

    binarySearch(a, lenght, num);

    printArr(a, lenght);

    return 0;
}

int binarySearch(int a[], int lenght, int num)
{
    int first = 0, middle = 0, flag = 0;
    int last = lenght - 1;

    while (first <= last){
        middle = (first + last) / 2;
        if(num == a[middle]){
            flag = 1;
            break;
        } else if( num > a[middle]) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }
    }
    if(flag == 1){
        printf("\nFound the number at position %d\n", middle + 1);
        return 0;
    } else {
        printf("\nNumber not found. Sorry.\n");
        return -1;
    }
}

int printArr(int a[], int lenght){
    int i = 0;

    printf("The array contains of: ");
    for (; i < lenght; i++){
        printf("%d ", a[i]);
    }
    return 0;
}