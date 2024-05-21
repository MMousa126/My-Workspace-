
#define     NULL_POINTER    ((void*)0)

typedef enum
{
     FIRST_TO_LAST,
     LAST_TO_FIRST

}print_t;
typedef struct Double_Node
{
    int data;
    struct Double_Node *next;
    struct Double_Node *previous;

}DNode_t;

 typedef struct
 {
     DNode_t*head;
     DNode_t*tail;
     int size;
 }DList_t;

 typedef DList_t*   LIST;



LIST Creat_DoubleList(void);

DNode_t*Create_DoubleNode(int data);

void DoubleList_AddToFirst(int data,LIST l);

void DoubleList_AddToLast(int data,LIST l);

void DoubleList_print(LIST l,print_t direction);
