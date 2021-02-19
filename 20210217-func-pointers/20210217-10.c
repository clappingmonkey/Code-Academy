#include <stdio.h>

#define LIMIT 1000
#define SIZE 168

/* Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.
Просто число е се нарича всяко естествено число, по-голямо от 1,
което има точно два естествени делителя – 1 и самото себе си.
Например 5 е просто, защото се дели единствено на 1 и 5, докато 6 не
е, защото се дели освен на 1 и 6, и на 2 и 3. */
void arrFiller(int *arr);
void arrPrinter(int *point);
void arrSearcher(int *point);

int main(void)
{
    int arr[SIZE] = {0};
    int *point = arr;
    arrFiller(point);

    arrSearcher(point);
    point = arr;
    arrPrinter(point);

    return 0;
}

void arrFiller(int *point){
    int i, j;

    for (i = 2; i < LIMIT; i++){
        for (j = 2; j < i; j++){
            if (i % j == 0){
                break;
            }
        }
        if (j == i){
            *point = i;
            point++;
        }
    }
}

void arrPrinter(int *point){

    printf("All prime number to %d stored in the array:\n", LIMIT);
    for(int i = 0; i < SIZE; i++){
        printf("%d, ", *(point + i));
    }    
}
void arrSearcher(int *point){
    int flag = 0, i, search = 0;

    printf("\nEnter number (0 - %d) to check if it\'s prime number? ", LIMIT);
    scanf("%d", &search);

    for(i = 0; i < SIZE; i++){
        if(*(point + i) == search){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("The number %d is primer and it\'s on %d position in the array.\n", search, i + 1);
        }else{
            printf("The number %d is not a primer number, sorry.\n", search);
        }
}