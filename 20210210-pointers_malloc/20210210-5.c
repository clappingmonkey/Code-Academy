#include <stdio.h>
#include <string.h>

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
    int i = 0;

    printf("%d lenght\n", lenght);

    sort(a,lenght);

    printf("The summ of the array is %d\n", sum_array(a,lenght));

    for (; i < lenght; i++){
        printf("%d   d\n", a[i]);
    }
    return 0;
}

void sort(int *a, int lenght){
    int *point = a + lenght;
    int *temp;

    do{
        temp = a + 1;
        do{
            if(*temp > *a){
                *a = *temp + *a;
                *temp = *a - *temp;
                *a = *a - *temp;                
            }
            temp++;
        } while (temp <= point);
        a++;                
    } while(a <= point);
}

int sum_array(int *a, int lenght){
    int *point = a + lenght;
    int res;

    do{
        res += *a;
        a++;
    } while(a <= point);
    return res;
}