#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

const int c_EmplSize = 10;
const int c_MaxExp = 35;
const int c_MaxSalary = 10000;
const int c_totalEmpls = 2000;

typedef struct manager{
    char *m_fName;
    char *m_lName;
}t_manager;

typedef struct employee{
    int m_Id;
    char *m_fName;
    char *m_mName;
    char *m_lName;
    char *m_position;
    float m_wExp;
    float m_salary;
    struct manager boss;
}t_employee;

t_employee makeWorker(t_employee emp);
t_manager makeBoss(t_manager boss);
void printList(t_employee emp);
void fillList(t_employee *list);


int main(void){
    srand((unsigned)time(0));

    t_employee *list = calloc(10, sizeof(char));

    printf("\t\t\tThe list of 10 employees:\n\n");
    
    fillList(list);


    return 0;
}

t_employee makeWorker(t_employee emp){
    char *fName = calloc(5, sizeof(char));
    *fName = {"Stoyan", "Todor", "Velian", "Valentin", "Bobi"};

    
    
    /* {"Stoyan", "Todor", "Velian", "Valentin", "Bobi"}*/;
    char *lName[] = {"Petrov", "Dimitrov", "Velichkov", "Papazov", "Dzhebarov"};
    char *job_pos[] = {"Support", "QA", "Sales", "HR", "Finance"};



    
    t_manager one;

    emp.m_Id = rand() % c_totalEmpls;
    emp.m_fName = fName[rand() % sizeof(fName) / sizeof(*fName)];
    emp.m_mName = lName[rand() % sizeof(lName) / sizeof(*lName)];
    emp.m_lName = lName[rand() % sizeof(lName) / sizeof(*lName)];
    emp.m_position = job_pos[rand() % sizeof(job_pos) / sizeof(*job_pos)];
    emp.m_wExp = rand() % c_MaxExp;
    emp.m_salary = rand() % c_MaxSalary;
    emp.boss = makeBoss(one);

  /*   printf("the size of fName is %ld\n the size of lName is %d\nthe size of job_pos is %d\n", (sizeof(fName) / sizeof(fName[0])), (sizeof(lName) / sizeof(lName[0])), (sizeof(job_pos) / sizeof(job_pos[0]))); */


    return emp;
}

t_manager makeBoss(t_manager boss){
    char *fName[] = {"Ivan", "Dimitar", "Petar"};
    char *lName[] = {"Stoyanov", "Todorov", "Krasimirov"};

    boss.m_fName = fName[rand() % sizeof(fName) / sizeof(*fName)];
    boss.m_lName = lName[rand() % sizeof(lName) / sizeof(*lName)];

    return boss;
}

void fillList(struct employee *list){
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