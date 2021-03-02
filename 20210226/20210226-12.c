#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият началник */

const int c_EmplSize = 10;
const int c_MaxExp = 35;
const int c_MaxSalary = 10000;
const int c_totalEmpls = 2000;


struct manager{
    char *m_fName;
    char *m_lName;
};

struct employee{
    int m_Id;
    char *m_fName;
    char *m_mName;
    char *m_lName;
    char *m_position;
    float m_wExp;
    float m_salary;
    struct manager boss;
};

struct employee makeWorker(struct employee emp);
struct manager makeBoss(struct manager boss);
void printList(struct employee emp);
void fillList(struct employee list[]);

int main(void){
    srand((unsigned)time(0));

    struct employee list[c_EmplSize];

    printf("\t\t\tThe list of 10 employees:\n\n");
    
    fillList(list);

    return 0;
}

struct employee makeWorker(struct employee emp){
    char *fName[] = {"Stoyan", "Todor", "Velian", "Valentin", "Bobi"};
    char *lName[] = {"Petrov", "Dimitrov", "Velichkov", "Papazov", "Dzhebarov"};
    char *job_pos[] = {"Support", "QA", "Sales", "HR", "Finance"};

    struct manager one;

    emp.m_Id = rand() % c_totalEmpls;
    emp.m_fName = fName[rand() % sizeof(fName) / sizeof(*fName)];
    emp.m_mName = lName[rand() % sizeof(lName) / sizeof(*lName)];
    emp.m_lName = lName[rand() % sizeof(lName) / sizeof(*lName)];
    emp.m_position = job_pos[rand() % sizeof(job_pos) / sizeof(*job_pos)];
    emp.m_wExp = rand() % c_MaxExp;
    emp.m_salary = rand() % c_MaxSalary;
    emp.boss = makeBoss(one);

    return emp;
}

struct manager makeBoss(struct manager boss){
    char *fName[] = {"Ivan", "Dimitar", "Petar"};
    char *lName[] = {"Stoyanov", "Todorov", "Krasimirov"};

    boss.m_fName = fName[rand() % sizeof(fName) / sizeof(*fName)];
    boss.m_lName = lName[rand() % sizeof(lName) / sizeof(*lName)];

    return boss;
}

void fillList(struct employee list[]){
    int i;

    for(i = 0; i < c_EmplSize; i++){
        list[i] = makeWorker(list[i]);
        printf("Employee n.%d\n", i + 1);
        printList(list[i]);
    }
}

void printList(struct employee emp){
    printf("ID number: %d\n", emp.m_Id);
    printf("Name: %s\n", emp.m_fName);
    printf("Surname: %s\n", emp.m_mName);
    printf("Last name: %s\n", emp.m_lName);
    printf("Job: %s\n", emp.m_position);
    printf("Experience: %2.f\n", emp.m_wExp);
    printf("Salary: %.2f\n", emp.m_salary);
    printf("Manager:\n\tName: %s Last: %s\n\n", emp.boss.m_fName, emp.boss.m_lName);
}