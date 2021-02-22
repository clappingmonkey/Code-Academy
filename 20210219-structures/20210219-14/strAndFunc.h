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