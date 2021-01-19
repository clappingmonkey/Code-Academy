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
    if ( rez == 1) {
        printf("Vie izbrahte opciq %d i dalzhite %d lv\n", rez, cenaKaravani);
    } else {
        printf("Vie izbrahte opciq %d i dalzhite %d lv\n", rez, cenaKemperi);
    }
    printf("Iskate li oshte nalichni produkti?\n");
    return 0;
}