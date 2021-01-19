#include <stdio.h>

/* Упражнение 8 */

int isLetter(char c);

int main()
{
    char c;
    printf("Enter value for the variable c and to check if is letter or number: ");
    scanf("%c", &c);
    isLetter(c);

    return 0;
}

int isLetter(char c)
{
    if (c >= '0' && c <= '9')
    {
        printf("\nThe value of c is %c and it is a number\n", c);
    } else {
        printf("The value of c is %c and it is a letter\n", c);
    }
    return c;
}