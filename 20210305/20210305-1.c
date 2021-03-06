#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* За да направи една етажерка, дърводелец се нуждае от следните компоненти:
4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E винта.
Колко етажерки може да направи дърводелецът?
Изход:С наличните на склад материали
(33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи скоби и 99 винта) дърводелецът може да направи 7 етажерки.  */

static const int c_reqLongPlank = 4;
static const int c_reqShortPlank = 6;
static const int c_reqLilBracket = 12;
static const int c_reqBigBracket = 2;
static const int c_reqScrews = 14;
static const int c_size = 5;

typedef struct storage{
    int m_longPlank;
    int m_shortPlank;
    int m_lilBracket;
    int m_bigBracket;
    int m_screws;
}t_storage;

void storageFiller(t_storage *list);
void shelfCalculator(t_storage *list);
void ascSortArr(int *arr);

int main(void){
    srand(time(NULL));

    t_storage *list = (t_storage*)malloc(c_size * sizeof(int));

    storageFiller(list);

    printf("\t\tIn the storage we have:\n\n");
    printf("Long plank: %d\n", list->m_longPlank);
    printf("Short plank: %d\n", list->m_shortPlank);
    printf("Little braker: %d\n", list->m_lilBracket);
    printf("Big bracket: %d\n", list->m_bigBracket);
    printf("Screw: %d\n", list->m_screws);

    shelfCalculator(list);

    free(list);

    return 0;
}

void storageFiller(t_storage *list){
    list->m_longPlank = rand() % 101;
    list->m_shortPlank = rand() % 101;
    list->m_lilBracket = rand() % 101;
    list->m_bigBracket = rand() % 101;
    list->m_screws = rand() % 101;
}

void shelfCalculator(t_storage *list){

    int *arr = malloc(c_size * sizeof(int));

    arr[0] = list->m_longPlank / c_reqLongPlank;
    arr[1] = list->m_shortPlank / c_reqShortPlank;
    arr[2] = list->m_lilBracket / c_reqLilBracket;
    arr[3] = list->m_bigBracket / c_reqBigBracket;
    arr[4] = list->m_screws / c_reqScrews;

    ascSortArr(arr);

    if(*arr == 1){
        printf("\nYou can build %d shelf with the given materials.\n", *arr);
    }else{
        printf("\nYou can build %d shelfs with the given materials.\n", *arr);
    }

    free(arr);
}

void ascSortArr(int *arr){
    int i, j, temp;

    for(i = 0;i < c_size;i++){
        for(j = i + 1;j < c_size;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}