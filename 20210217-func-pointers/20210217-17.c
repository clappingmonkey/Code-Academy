#include <stdio.h>
#include <stdlib.h>

/* Имаме 2 сортирани масиви А и В с по 88 елемента.
Образувайте масив С с 2х88 елемента образуван от смесването на А и В,
така че С да съдържа елементите на А и В, но да е подреден и да не се
налага да го сортираме отново.
Насоки: Проверяваме от кой масив да вземем следващия елемент за
слагане в масива /цикъл и проверка./ */

void arrMerger(int *arr1, int *arr2, int slength1, int length2, int *res);

int main(void)
{
    int arr1[5] = {1, 20, 23, 25, 26};
    int arr2[4] = {4, 5, 9, 14};

    int length1 = sizeof(arr1) / sizeof(int);
    int length2 = sizeof(arr2) / sizeof(int);
    int gloLength = length2 + length1;

    int *res = NULL;
    res = (int *)malloc((length2 + length1) * sizeof(int));
    arrMerger(arr1, arr2, length1, length2, res);
    for(int i = 0; i < gloLength; i++){
        printf("%d\n", res[i]);
    }

    free(res);
    return 0;
}

void arrMerger(int *arr1, int *arr2, int length1, int length2, int *res){
    int i = 0, j = 0, counter = 0;
    while (i < length1 || j < length2){
        if((arr1[i] > arr2[j]) && j < length2){
            res[counter] = arr2[j];
            j++;
            counter++;
        }else if((arr1[i] < arr2[j]) && i < length1){
            res[counter] = arr1[i];
            i++;
            counter++;
        }else{
            res[counter] = arr1[i];
            i++;
            counter++;
        }
    }
}