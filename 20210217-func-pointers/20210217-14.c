#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск. */
int strLenght(char *point);
int sizeChecker(char *s, char *s2);
int strConverter(char *s);
int strSorter(char *s);

int (*func_ptr[2])() = {strLenght, sizeChecker};

int main(void){
    char *str1;
    char *str2;

    int length, flag = 0, nFlag = 0;

    str1 = malloc(256);
    str2 = malloc(256);

    printf("Enter the first word:\n");
    scanf("%s", str1);
    printf("Enter the second word to check if is anagram with the first:\n");
    scanf("%s", str2);

    sizeChecker(str1, str2);

    printf("%s and %s\n", str1, str2);

    if(strlen(str1) == strlen(str2)){
        length = strlen(str1);

        for(int i = 0; i < length; i++){
            flag = 0;
            for(int k = 0; k < length; k++){
                if(str1[i] == str2[k]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                nFlag = 1;
                break;
            }
        }
        if(nFlag == 1){
            printf("\vThe two words are not anagram\n");
        }else{
            printf("\nThe two words are anagram\n");
        }
    }else{
        printf("\nThe words need to be same number of letters\n");
    }  

    free(str1);
    free(str2);

    return 0;
}

int strLenght(char *point){
    int c = 0;

    while( *(point + c) != '\0'){
        c++;
    }
    return c;
}
int sizeChecker(char *s, char *s2){
    if(func_ptr[0](s) != func_ptr[0](s2)){
        return printf("The words are not anagram\n");
    }
    return printf("The words have same numbers of letters\n");
}

int strConverter(char *s){
    int i = 0;

    for(; i < strlen(s) - 1; i++){
        *(s + i) += 32; 
    }
    return 0;
}

int strSorter(char *s){
    int temp = 0, k = 0, l;

    for(; k < strlen(s) - 1; k++){
        for(l = k + 1; l < strlen(s); l++){
            if( *(s + k) > *(s + l)){
                temp = *(s + k);
                *(s + k) = *(s + l);
                *(s + l) = temp;
            }
        }
    }
}