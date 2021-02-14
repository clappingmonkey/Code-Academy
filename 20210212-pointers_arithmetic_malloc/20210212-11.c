#include <stdio.h>
#include <stdlib.h>

/* Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */

const char NEWLINE;
extern int g_lenght;

void listRunners(int *num, int *age, char **name);
void printList(int *num, int *age, char **name);
void arrSorter(char **name, int *num, int *age);

int main(void){
    int *num = NULL;
    int *age = NULL;
    char **name = NULL;
    
    printf("Enter the number of the participants in the marathon: ");
    scanf("%d", &g_lenght);

    num = malloc(g_lenght * sizeof(int));
    age = malloc(g_lenght * sizeof(int));
    name = malloc(g_lenght * sizeof(char));

    listRunners(num, age, name);

    arrSorter(name, num, age);

    printList(num, age, name);

    return 0;
}

void arrSorter(char **name, int *num, int *age){
    int i = 0, j = 0, k = 0;
    char *a;
    int changer;

     for(;i < g_lenght--; i++){
        for(j=i; j < g_lenght; j++){
            while(name[i][k] != '\0'){
                if(name[i][k] > name[j][k]){
                    a = name[i];
                    name[i] = name[j];
                    name[j] = a;
                    changer = num[i];
                    num[i] = num[j];
                    num[j] = changer;
                    changer = age[i];
                    age[i] = age[j];
                    age[j] = age[i];
                    break;
                }
                k++;
            }
        }
        
    }

}

void listRunners(int *num, int *age, char **name){
    int i = 0, j = 0, constStrSize = 2, temp, tempN;
    char c;


    for(; i < g_lenght; i++){
        printf("Enter the number of the runner #%d: ", i);
        scanf("%d", &tempN);

        num[i] = tempN;
        
        printf("Enter the first name of the runner #%d: ", i);

        name[i] = (char*)malloc(constStrSize * sizeof(name[0]));
        while((c = getchar()) != '\n'){
             if(j == constStrSize - 1){
                constStrSize += 2;
                name = realloc(name, constStrSize * sizeof(char));
            } 
            name[i][j] = c;
            j++;            
        }

        name[i][j] = '\0';

        if(j != 0){
            j = 0;
        }

        if(constStrSize != 2){
            constStrSize = 2;
        }
        printf("Enter the age of the runner #%d: ", i);
        scanf("%d", &temp);

        age[i] = temp;
    }
}

void printList(int *num, int *age, char **name){
    int i = 0;

    printf("The list of the runners in the marathon:%c", NEWLINE);

    for(; i < g_lenght; i++){
        printf("Race number: %d\t", num[i]);
        printf("Name: %s\t", name[i]);
        printf("Age: %d\t  ", age[i]);
        printf("%c", NEWLINE);
    }
}

int g_lenght = 0;
const char NEWLINE = '\n';