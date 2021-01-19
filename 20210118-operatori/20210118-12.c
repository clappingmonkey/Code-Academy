# include <stdio.h>

/* Упражнение 12. Relational operators */

int main(){
    int nX, nY = 20;
    printf("Enter value for X: ");
    scanf("%d", &nX);

    if (nX == nY)
    {
        printf("%d and %d are equal\n", nX, nY);
    } else {
        printf("%d and %d are not equal\n", nX, nY);
    }

    if (nX > nY)
    {
        printf("%d is greater than %d\n", nX, nY);
    } else {
        printf("%d is smaller than %d\n", nX, nY);
    }

    if ( nX < nY)
    {
        printf("%d is smaller than %d\n", nX, nY);
    } else
    {
        printf("%d is greater than %d\n", nX, nY);
    }

    if ( nX >= nY)
    {
        printf("%d is greater or equal to %d\n", nX, nY);
    } else
    {
        printf("%d is smaller or equal to %d\n", nX, nY);
    }

    if ( nX != nY)
    {
        printf("%d is not equal to %d\n", nX, nY);
    } else
    {
        printf("%d is equal to %d\n", nX, nY);
    }
    return 0;
}
