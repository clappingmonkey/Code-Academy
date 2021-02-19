#include <stdio.h>
#include <stdlib.h>


/* Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция. */

int fnPlus(int nA, int nB);
int fnMinus(int nA, int nB);
int fnMultipl(int nA, int nB);
int fnDiv(int nA, int nB);

int (*func_ptr[4])() = {fnPlus, fnMinus, fnMultipl, fnDiv};

int main(void){
    char c;
    int nA = 0, nB = 0;

    printf("Choose which function you want to use?\n");
    printf("For addition type  +\n");
    printf("For subtraction type -\n");
    printf("For multiplication type x or .\n");
    printf("For division type /\n");
    scanf("%c", &c);

    printf("Enter the the numbers you want to %c. One by one\n", c);
    scanf("%d", &nA);
    scanf("%d", &nB);

    if(c == '+'){
        c = 0;
    }else if(c == '-'){
        c = 1;
    }else if( c == 'x' || c == '.'){
        c = 2;
    }else if(c == '/'){
        c = 3;
    }

    printf("The resuls is %d\n", func_ptr[c](nA,nB));

    return 0;
}

int fnPlus(int nA, int nB){
    return nA + nB;
}
int fnMinus(int nA, int nB){
    return nA - nB;
}
int fnMultipl(int nA, int nB){
    return nA * nB;
}
int fnDiv(int nA, int nB){
    return nA / nB;
}