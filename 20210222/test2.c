#include <stdio.h>

enum bool{ false, true, lie};

int main(void){

    enum bool b = lie;
    switch (b){
    case true:
        printf("true");
        break;

    case false:
        printf("false");
        break;

    case lie:
        printf("the cake is a lie!");
        break;
    }

    return 0;
}