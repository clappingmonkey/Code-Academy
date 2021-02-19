#include <stdio.h>

/* Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.
Вариация: Да се направи същото с масив от символи. */

void bubble_sort(int[], int n);

int main(){
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);

    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);

    printf("Sorted list in ascending order:\n");

    for (i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}

void bubble_sort(int list[], int n)
{
    int i, k, t;

    for (i = 0; i < n - 1; i++){
        for (k = 0; k < n - i - 1; k++){
            if (list[k] > list[k + 1]){
                t = list[k];
                list[k] = list[k + 1];
                list[k + 1] = t;
            }
        }
    }
}