# include <stdio.h>



int main(){
    char otg;
    printf("Press 1 to see message Hello\n");
    printf("Press 2 to se Poem\n");
    printf("Press 3 to see hidden message\n");
    scanf("%hhd", &otg);

    if ( otg == 1)
        printf("You pressed 1 - Hello\n");
    else if ( otg == 2)
        printf("You pressed 2 - Lorem Ipsum\n");
    else
        printf("The ultimate number is 42, so now you know it.\n");
    
    return 0;
}