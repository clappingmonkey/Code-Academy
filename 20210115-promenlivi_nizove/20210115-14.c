#include <stdio.h>

extern int g_var;
void test();

int main(void){
    printf("The original value of g_var is %d\n", g_var);
    test();
    printf("g_var is: %d\n", g_var);
    test();
    printf("g_var is: %d\n", g_var);
    test();
    printf("The last value of g_var is %d\n", g_var);

}

int g_var = 3;
void test(){
    g_var++;
}