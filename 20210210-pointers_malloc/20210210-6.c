#include <stdio.h>

/* Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи. */

int linear_search(int *a, int lenght, int target);

int main(void){
    int a[] = {1, 2, 3, 4, 5};
    int lenght = sizeof(a) / sizeof(a[0]);
    int target = 0;

    printf("The a[] array contain 1, 2, 3, 4, 5. Enter number from the array to find it position: ");
    scanf("%d", &target);


    printf("\nYou entered %d and it\'s on position %d\n", target, linear_search(a, lenght, target));

    return 0;
}

int linear_search(int *a, int lenght, int target){
    int *point = a + lenght;

    do{
        if( *a == target){
            return a - (point - lenght);
        }
        a++;
    } while (a <= point);
    return 0;
}