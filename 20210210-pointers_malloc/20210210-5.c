#include <stdio.h>

/* Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
} */

/* Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
void sort ( int a[], int n){
int i, j, temp;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
} */

void sort(int *a, int lenght);
int sum_array(int *a, int lenght);

int main(void){
    int a[] = {1, 2, 3};
    int lenght = sizeof(a) / sizeof(a[0]);

    sum_array(a, lenght);

    return 0;
}

void sort(int *a, int lenght){
    int *point = a + lenght;

    while(a < point) {
        int *temp = a + 1;
        while (temp <= point){
            if(*temp > *a){
                *a = *temp - *a;
                *temp = *a - *temp;
                *a = *a - *temp;
            }
            temp++;
        }
        a++;
    }
}

int sum_array(int *a, int lenght){
    int *point = a + lenght;
    int res = 0;

    while (a < point){
        res += *a;
        a++;
    }    
    return printf("The sum of the array is %d\n", res);
}