#include <stdio.h>

int g_var = 3;
void test();

int main(void){
    test();
    test();
    test();
    printf("g_var is - %d\n", g_var);

}

void test(){
    g_var++;
    printf("g_var is: %d\n", g_var);
}