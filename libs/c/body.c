/*float faceSqr(float r){
    return PI * (r * r);
}

float liceOkr(float R){
    float liceOkrRez;
    liceOkrRez = PI * R * R;
    return liceOkrRez;
}

float liceElip(float A, float B){
    float liceElRez;
    liceElRez = PI * A * B;
    return liceElRez;
}*/

/*void reverseArr(char arr[]){
    char r[strlen(arr)];
    int i, j;
    for (i = 0, j = strlen(arr) - 1; i < strlen(arr); i++, j--){
        r[i]=arr[j];
        printf("%c", r[i]);
    }
    printf("\nTry with other input or exit with CTRL+D\n");
}*/

int additionFunc(int a, int b, int c){

    return a + b + c; 
}

float absoluteValue(float num){

    if(num < 0){
        num =  (-1) * num;
    }
    return num;
}

int sqrOfNum(int num){
    float sqr = 0;

    if(num < 0){
        printf("\nThe number is negative and the result is -1\n");
    } else {
        sqr = sqrt(num);
        printf("\nSquare root of %d is %.4f\n", num, sqr);
    }
    return 0;
}

int incrNum(int num){
    num++;
    return num;
}

void printStr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        printf("%c", str[i]);
        i++;
    }
}

double atof(char *str){
    int i = 0;
    double leftNum = 0, rightNum = 0, power = 1;

    while (str[i] >= '0' && str[i] <= '9')
        leftNum = 10 * leftNum + (str[i++] - '0');
        i++;

    while (str[i] >= '0' && str[i] <= '9'){
        rightNum = 10 * rightNum + (str[i] - '0');
        i++;
        power *= 0.1;
    }
    return leftNum + rightNum * power;
}