#include <stdio.h>

int main(void){
    float cenaDomati = 4.5;
    float cenaBrashno = 1.80;
    float cenaKiseloMlqko = 0.50;
    float cenaSladoledFuniika = 0.60;
    float cenaBonboni = 1.50;
    float cenaBlizalki = 0.15;
    float kgDomati;
    float kgBrashno;
    short brKiseloMlqko;
    short brSladoledenaFuniika;
    float kgBonboni;
    short brBlizalki;

    printf("Здравейте, добре дошли в нашия магазин!\nДнес предлагаме - пресни домати, брашно, кисело мляко, сладолед на фунийки и близалки.\n");
    printf("Колко килограма домати ще желаете? ");
    scanf("%f",&kgDomati);
    float domatiTotal = kgDomati * cenaDomati;
    printf("\nКолко килограма брашно ще желаете? ");
    scanf("%f",&kgBrashno);
    float brashnoTotal = kgBrashno * cenaBrashno;
    printf("\nКолко броя кисело мляко ще желаете? ");
    scanf("%hd",&brKiseloMlqko);
    float kiseloMlqkoTotal = brKiseloMlqko * cenaKiseloMlqko;
    printf("\nКолко броя сладоледени фунийки ще желаете? ");
    scanf("%hd",&brSladoledenaFuniika);
    float funiikiTotal = brSladoledenaFuniika * cenaSladoledFuniika;
    printf("\nКолко килограма бонбони ще желаете? ");
    scanf("%f",&kgBonboni);
    float bonboniTotal = kgBonboni * cenaBonboni;
    printf("\nКолко броя близалки ще желаете? ");
    scanf("%hd",&brBlizalki);
    float blizalkiTotal = brBlizalki * cenaBlizalki;

    float total = blizalkiTotal + bonboniTotal + funiikiTotal + kiseloMlqkoTotal + brashnoTotal + domatiTotal;
    printf("\nВашата сметка е %.2f\n", total);
}