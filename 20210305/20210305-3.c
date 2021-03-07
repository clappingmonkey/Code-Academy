#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* С увеличаване на надморската височина температурата намалява с
около 0,5oC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХoC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УoC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... oC , то температурата на връх Вихрен (2918м н.м.р.) е ... oC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... oC , то температурата на хижа Вихрен (1950м н.м.р.) е ... oC. */

typedef struct{
    float temperaturePeak;
    float temperatureHut;
    float heighHut;
    float heighPeak;

}info;
void menu();

int main(void){

    menu();

    return 0;
}

void menu(){
    info *temperature = (info *)malloc(sizeof(info));
    float distance = 0;
    int choice = 0;

    printf("What temperature do you know?\nPress 1 for hut`s temperature\tPress 2 for peak`s temperature\n");
    scanf("%d", &choice);

    if (choice == 1){
        printf("Please enter temperarure of the Hut: ");
        scanf("%f", &temperature->temperatureHut);

        printf("\nPlease enter heigh of the Hut: ");
        scanf("%f", &temperature->heighHut);

        printf("\nPlease enter heigh of the Peak: ");
        scanf("%f", &temperature->heighPeak);

        distance = floor((temperature->heighPeak - temperature->heighHut) / 100);
        temperature->temperaturePeak = temperature->temperatureHut - (distance * 0.5);

        printf("%f", distance);
        printf("Temperature of the Peak is %.2f", temperature->temperaturePeak);

    }else if(choice == 2){
        printf("Please enter temperarure of the peak: ");
        scanf("%f", &temperature->temperaturePeak);

        printf("\nPlease enter heigh of the peak: ");
        scanf("%f", &temperature->heighPeak);

        printf("\nPlease enter heigh of the Hut: ");
        scanf("%f", &temperature->heighHut);

        distance = floor((temperature->heighPeak - temperature->heighHut) / 100);
        temperature->temperatureHut = temperature->temperaturePeak + (distance * 0.5);

        printf("%f", distance);
        printf("Temperature of the Peak is %.2f", temperature->temperatureHut);
    }else{
        printf("\nInvalid number!");
    }
    free(temperature);
}