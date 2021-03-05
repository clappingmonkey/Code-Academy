#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента -
диаметър и дебелина на кората заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента - диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.
Изход:
По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D
см вместо ... дини с диаметър ... см и дебелина на кората D1 см. */

static const int melonDMin = 15;
static const int melonDMax = 140;
static const float melonCrMin = 0.5;
static const float melonCrMax = 3.5;
static const int pumpDMin = 35;
static const int pumpDMax = 95;
static const float pumpCrMin = 0.3;
static const float pumpCrMax = 0.9;

typedef struct melon{
    float m_dMeter;
    float m_crustThick;
}t_melon;


int randomer(int a, int b);
void arrFiller(t_melon *melons, int num);
float average(t_melon *melons, int num);
float averageCrust(t_melon *melons, int num);
float averageDMeter(t_melon *melons, int num);
void comparer(t_melon *melons, int A, t_melon *pumpkins, int B);
void destroyer(t_melon *melons, t_melon *pumpkins);

int main(void){
    srand(time(NULL));

    int A = rand() % 20;
    int B = rand() % 20;

    t_melon *melons;
    melons = (t_melon*) malloc(A * sizeof(t_melon));

    t_melon *pumpkins;
    pumpkins = (t_melon*) malloc(B * sizeof(t_melon));

    printf("Watermelons:\n");
    arrFiller(melons, A);

    printf("Pumpkins:\n");
    arrFiller(pumpkins, B);

    comparer(melons, A, pumpkins, B);

    destroyer(melons, pumpkins);

    return 0;
}

int randomer(int a, int b){
    return (rand() % (b - a + 1)) + a;
}

void arrFiller(t_melon *melons, int num){
    int i = 0;

    for(;i < num; i++){
        melons[i].m_dMeter = randomer(melonDMin, melonDMax);
        melons[i].m_crustThick = (float)randomer(melonCrMin * 10, melonCrMax * 10) / 10;
        printf("%3.f, %3.f\n", melons->m_dMeter, melons->m_crustThick);
    }
}

float average(t_melon *melons, int num){
    int i = 0;
    float avg = 0;

    for(; i < num; i++){
        avg += (float)melons[i].m_dMeter - melons[i].m_crustThick;
    }
    return avg /= num;
}

float averageCrust(t_melon *melons, int num){
    int i = 0;
    float avg;

    for(; i < num; i++){
        avg += melons[i].m_dMeter;
    }
    return avg /= num;
}

float averageDMeter(t_melon *melons, int num){
    int i = 0;
    float avg = 0;

    for(;i < num; i++){
        avg += melons[i].m_dMeter;
    }
    return avg /= num;
}

void comparer(t_melon *melons, int A, t_melon *pumpkins, int B){

    if(average(melons, A) > average(pumpkins, B)){
        printf("It\'s better to buy melons with average diameter %.3f and and crust thickness %.3f,\n \
        than pumpkins with average diameter %.3f and average crust %.3f\n", averageDMeter(melons, A), averageCrust(melons, A),
        averageDMeter(pumpkins, B), averageCrust(pumpkins, B));
    }else{
        printf("It\'s better to buy pumpkins with average diameter %.3f and crust thickness %.3f,\n \
        than melons with average diameter %.3f and crust thickness %.3f\n", averageDMeter(pumpkins, B), averageCrust(pumpkins, B),
        averageDMeter(melons, A), averageCrust(melons, A));
    }
}

void destroyer(t_melon *melons, t_melon *pumpkins){
    free(melons);
    free(pumpkins);
}