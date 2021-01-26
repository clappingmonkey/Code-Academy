#include <stdio.h>

int main(){
    char otg = 0;

    while (otg != 4){
        printf("Press 1 to see message Hello\n");
        printf("Press 2 to se Poem\n");
        printf("Press 3 to see hidden message\n");
        printf("Press 4 for exit\n");
        scanf("%hhd", &otg);
        switch (otg){
            case 1:
                printf("You pressed 1 - Hello\n");
                break;
            case 2:
                printf("You pressed 2 - Lorem Ipsum\n");
                break;
            case 3:
                printf("The ultimate number is 42, so now you know it.\n");
                break;
            case 4:
                printf("You pressed 4 and the program is closing\n");
                break;
            default:
                printf("Press 1, 2,3 or 4\n");
                break;
        }
    }
    return 0;
}