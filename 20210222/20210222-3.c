#include <stdio.h>
#include <string.h>

/* Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана. */

struct product{
    char m_name[32];
    char m_brand[32];
    int m_quantity;
    float m_price;
} __attribute__((packed));

int main(void){

    struct product choco;

    choco.m_quantity = 50;
    strcpy(choco.m_name, "chocolate");
    strcpy(choco.m_brand, "Milka");
    choco.m_price = 2.50;

    printf("\tThe information about the %s product:\n\n", choco.m_name);
    printf("Brand: %s\nPrice: %.2f\nQuantity: %d\n", choco.m_brand, choco.m_price, choco.m_quantity);

    return 0;
}