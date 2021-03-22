typedef struct t_node{
    int m_data;
    struct t_node *m_next;
} t_node;

extern t_node *start;

void init();
int addAfter(int n, int k);
int add(int data);
void printAfter(t_node *curr);
void dellElemReturnAfter(int *n);