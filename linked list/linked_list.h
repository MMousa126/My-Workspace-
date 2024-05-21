#define     NULL_POINTER    ((void*)0)

typedef struct node
{
    int data;
    struct node *next;
}Node_T;


Node_T*Create_Node(int data);

void Add_NodeToLast(int data ,Node_T **ptrhead );

void Add_NodeToFirst(int data ,Node_T **ptrhead );

void Print_LinkedList(Node_T*head);

int Edit_Node(Node_T*head,int old_data,int new_data);

int Insert_After(Node_T*head,int previous_data,int new_data);

int Remove_NodeFromEnd(Node_T*head);

int Remove_NodeFromFirst(Node_T**head);
