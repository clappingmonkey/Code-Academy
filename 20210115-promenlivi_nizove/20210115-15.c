#include <stdio.h>

void test();

int main(void){
    test();
    test();
    test();
    printf("var is - %d\n", var);

}

void test(){
    static int var = 3;
    var++;
    printf("var is: %d\n", var);
}