
#include"Double_List.h"

LIST Creat_DoubleList(void)
{
    LIST l = (LIST)malloc(sizeof(DList_t));
    l->head = 0;
    l->tail = 0;
    l->size = 0;
    return l;
}

DNode_t*Create_DoubleNode(int data)
{
    DNode_t* n=(DNode_t*)malloc(sizeof(DNode_t));
    n->data = data;
    n->next = NULL_POINTER;
    n->previous = NULL_POINTER;
    return n;/* returning address */
}

void DoubleList_AddToFirst(int data,LIST l)
{
    DNode_t*Newnode = Create_DoubleNode(data);
    Newnode->next = l->head;
    if (l->head != 0)
    {
        l->head->previous = Newnode;

    }
    else
    {
        l->tail = Newnode; /* if i was not node in the list and the first one i create is the only one */
    }

    l->head=Newnode;
    l->size++;

}

void DoubleList_AddToLast(int data,LIST l)
{
    DNode_t*Newnode = Create_DoubleNode(data);

    Newnode->previous = l->tail;

    if (l->tail != 0)
    {
        l->tail->next = Newnode;
    }
    else
    {
        l->head = Newnode;
    }

    l->tail = Newnode;
    l->size++;
}

void DoubleList_print(LIST l,print_t direction)
{
    DNode_t *current;
    if (direction == FIRST_TO_LAST)
    {
        current = l->head;
        while(current!=0) // or for(int i=0;i<l->size;i++)
        {
            printf("%d    ",current->data);
            current = current->next;
        }
    }
    else
    {
        current = l->tail;
        for(int i=0;i<l->size;i++)
        {
            printf("%d    ",current->data);
            current = current->previous;
        }
    }

}
