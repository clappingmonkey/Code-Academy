#include <stdio.h>
#include <string.h>

/* Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив. */

int atoi(char *s);
void itoa(int n, char *s);
double atof(char *s);
void reverse(char *s);

int main(void){
    char s[] = "12";
    char t[12] = "0";
    int a = 112;

    printf("%f\n", atof(s));
    printf("%d\n", atoi(s));

    itoa(a, t);
    printf("%s\n", t);

    reverse(t);
    printf("%s\n", t);    

    return 0;
}

int atoi(char *s){
    int res = 0;

    do{
        res *= 10;
        res +=(*s - '0');
        *s++;
    } while (*s != '\0');
    
    return res;
}

void itoa(int n, char *s){
    do{
        *s = (n % 10) + '0';
        n /= 10;
        *s++;        
    } while (n > 0);
}

void reverse(char *s){
    char temp, *j, *i;

    i = s;
    j = i + strlen(s) - 1;

    for(; i < j; i++, j--){
        temp = *i;
        *i = *j;
        *j = temp;
    }
}

double atof(char *s){
    int i = 0;
    double res = 0, flagPoint = 0, flagNega = 1, calcPoint = 1;

    if(*s == '-'){
        flagNega = -flagNega;
    }
    while (*s != '\0'){
        if(*s == '.'){
            flagPoint = 1;
            *s++;
            continue;
        }
        if(*s < '0' || *s > '9'){
            *s++;
            continue;
        }else{
            if(flagPoint){
                calcPoint /= 10;
                res += (*s - '0') * calcPoint;
            }else{
                res = res * 10 + (*s - '0');
            }
        }
        *s++;
    }
    return res * flagNega;
}