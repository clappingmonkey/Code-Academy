#include <stdio.h>

int main(){
    int nA;
    printf("Enter value for nA:\n");
    scanf("%d", &nA);
    int nB = (nA == 1 ? 2 : 0); /* сравнява числото */
    printf("A value is %d\n", nA); printf("B value is %d\n", nB);
    }