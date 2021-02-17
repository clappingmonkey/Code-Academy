#include <stdio.h>
#include <stdlib.h>

/* Направете две функции и извикайте желаната функция с
указател към функция, съобразно знака, подаден от командния ред: а.оut
20 + 3 */

int fnPlus(int nA, int nB);
int fnMinus(int nA, int nB);
int fnMultipl(int nA, int nB);
int fnDiv(int nA, int nB);

int main(int argc, char *argv[]){
    int (*pfCalc) (int, int) = NULL;

    if(argc < 4){
        printf("\nUsage: %s +/- arg1 arg2\n", argv[0]);
    }else if('-' == argv[1][0]){
        pfCalc = fnMinus;
    }else if('+' == argv[1][0]){
        pfCalc = fnPlus;
    }else if('*' == argv[1][0]){
        pfCalc = fnMultipl;
    }else if('/' == argv[1][0]){
        pfCalc = fnDiv;
    }

    if(pfCalc = NULL){
        return 1;
    }else{
        printf("\nResult: %d\n",(*pfCalc) (atoi(argv[2]), atoi(argv[3])) );
    }

    return 0;
}