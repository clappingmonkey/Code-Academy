#include <stdio.h>
#include <stdlib.h>

/*  Направете сериализация и десериализация на структурата
typedef struct Person{
char name[20];
int age;
char gender;
}t_person;
в XML формат по показания в лекцията начин.*/

static const char *FORMAT_IN = "<person>\n\t<name>%[^<]</name>\n\t<age>%d</age>\n\t<gender>%c</gender>\n</person>\n";
static const char *FORMAT_OUT = "<person>\n\t<name>%s</name>\n\t<age>%d</age>\n\t<gender>%c</gender>\n</person>\n";

typedef struct Person{
    char name[20];
    int age;
    char gender;
}t_person;

int main(void){
    t_person one ={
        .name = "Ventsi",
        .age = 30,
        .gender = 'M'
    };

    t_person two;

    FILE *fp = NULL;
    fp = fopen("people.xml", "w");

    if(NULL == fp){
        printf("Error handling the file!!\n");
        return 1;
    }else{
        fprintf(fp, FORMAT_OUT, one.name, one.age, one.gender);
        rewind(fp);
        fscanf(fp, FORMAT_IN, two.name, two.age, two.gender);

        printf(FORMAT_OUT, two.name, two.age, two.gender);

        fclose(fp);
        fp = NULL;
    }
    return 0;
}