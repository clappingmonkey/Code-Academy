#include <stdio.h>

int main(void){
    int i=0;
    for(;;){
       printf("%d\n", ++i);
       if (i == 48){ 
           break;
       }
    }
    return 0;
}