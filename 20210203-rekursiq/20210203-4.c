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

int binarySearch(int a[], int lenght, int num);

int main(void){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int lenght = sizeof(a) / sizeof(int);
    int num = 0;

    printf("Please enter number to search in the array? ");
    scanf("%d", &num);

    printf("%d\n", binarySearch(a, lenght, num));

/*     binSearch(a, lenght, num); */

    return 0;
}

int binarySearch( int a[], int lenght, int num){
    int i, begin = 0, end = 1;

    while(end - begin > 1){
        i = begin + (end - begin) / 2;
        if(a[i] == num){
            printf("%d\n", i);
            return i;
        } else if( a[i] < num){
            begin = i;
            printf("test\n");
        } else {
            end = i;
        }
    }    
    printf("Sorry the wanted\n");
    return -1;
}