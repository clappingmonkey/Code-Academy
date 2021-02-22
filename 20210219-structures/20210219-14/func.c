#include <stdio.h>
#include <stdlib.h>
#include "strAndFunc.h"

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