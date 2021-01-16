#include <stdio.h>

int test();

int main(void){
    test();
    test();
    test();
    printf("var is - %d\n", test());

}

int test(){
    static int var = 3;
    var++;
    printf("var is: %d\n", var);
    return var;
}