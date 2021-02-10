#include <stdio.h>

/* Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях. */

extern int g_lenght;

void addValForArr(int *s);
int biggestNum(int *s);

int main(void){

    printf("Enter the number of elements in array: ");
    scanf("%d", &g_lenght);

    int s[g_lenght];

    printf("Enter numbers for value of array with size %d\n", g_lenght);

    addValForArr(s);

    printf("\nThe biggest number of the entered in the array is: %d\n", biggestNum(s));

    return 0;
}

int biggestNum(int *s){
    int i;
    int max = s[0];

    for (i = 0; i < g_lenght; i++){
        if(max < s[i]){
            max = s[i];
        }        
    }
    return max;
}

void addValForArr(int *s){
    int i = 0;

    for (; i < g_lenght; i++){
        printf("Enter value for %d element in the array: ", i);
        scanf("%d", &s[i]);
    }
}

int g_lenght = 0;