#include <stdio.h>

int main(void){
    char broiKaravani = 3;
    char broiKemperi = 3;
    char cenaKaravani = 90;
    char cenaKemperi = 100;
    int rez;
    printf("Dobre doshli v Karavani Kempeti pod naem.\n");
    printf("Ako zelaete karavana natisnete - 1\n");
    printf("Ako zelaete kemper natisnete - 2\n");
    scanf("%d", &rez);
    printf("Vie izbrahte izbor - %d\n", rez);
    return 0;
}