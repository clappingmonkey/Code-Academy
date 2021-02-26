#include <stdio.h>

/* Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо. */

#ifdef DEBUG
    #define DEBUGMSG(msg) {printf("DEBUG: %s\n", (msg));}
#else
    #define DEBUGMSG(msg)
#endif

int main(void){

    DEBUGMSG("Testing");

    return 0;
}