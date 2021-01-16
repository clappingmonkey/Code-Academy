#include <stdio.h>

int test();

int main(void){
    test();
    test();
    test();

}
int test(void){
    static int var = 3;
    var++;
    printf("var is: %d\n", var);
    return var;
}