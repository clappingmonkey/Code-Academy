#include <stdio.h>

/* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата. */


double atof(char *s);

int main(void){

    char s[] = "test-testing -12s3.456789";
    printf("%f\n", atof(s));

    return 0;
}


double atof(char *s){
    int i = 0, flag = 1;
    double leftNum = 0, rightNum = 0, power = 1;

    for(; s[i]; i++){
        if(s[i] == '-' && (s[i+1] >= '0' && s[i+1] <= '9')){
            flag = -1;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            leftNum = 10 * leftNum + (s[i] - '0');
        }
        else if((s[i] == '.' || s[i] == ',') && (s[i+1] >= '0' && s[i+1] <= '9')){
            i++;
            break; 
        }
    }

    while (s[i] >= '0' && s[i] <= '9'){
        rightNum = 10 * rightNum + (s[i] - '0');
        i++;
        power *= 0.1;
    }
    return leftNum * flag + rightNum * flag * power;
}