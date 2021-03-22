#include <time.h>
#include <stdio.h>
 
int main() 
{
        time_t current_time = time(NULL);
        struct tm *tm = localtime(&current_time);
        printf("\nCurrent Date and Time:\n");
        printf("%s\n", asctime(tm));
        return 0;
}