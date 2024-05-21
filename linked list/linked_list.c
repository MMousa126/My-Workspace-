

#include"linked_list.h"



Node_T*Create_Node(int data)
{
    Node_T*list = (Node_T*)malloc(sizeof(Node_T));
    list->data = data;
    list->next=0;
    return list;
}

void Add_NodeToLast(int data,Node_T **ptrhead )
{


    Node_T*newnode = Create_Node(data);
    Node_T *current = *ptrhead;

    if (*ptrhead == 0)
    {
        *ptrhead = newnode;
    }
    while(current->next != 0)
    {
        current = current->next;
    }
    current->next = newnode;
}

void Add_NodeToFirst(int data,Node_T **ptrhead )
{
    Node_T*newnode = Create_Node(data);
    newnode->next = *ptrhead;
    *ptrhead =  newnode;
}

void Print_LinkedList(Node_T*head)
{
    while(head!=0)
    {
        printf("%d       ",head->data);
        head = head->next;
    }
}

int Edit_Node(Node_T*head,int old_data,int new_data)
{
    while(head!=0)
    {
        if (head->data == old_data)
        {
            head->data = new_data;
            return 1;
        }
        head = head->next;
    }
    return 0;
}

int Insert_After(Node_T*head,int previous_data,int new_data)
{
    Node_T*current=head;
    if (head == 0)
    {
        return 0;
    }
    Node_T*newnode = Create_Node(new_data);

    while(current != 0)
    {
        if (current->data == previous_data)
        {
            newnode->next = current->next;
            current->next = newnode;
            return 1;
        }
        current = current->next;
    }
    return 0;
}

int Remove_NodeFromEnd(Node_T*head)
{

    while(head->next->next != 0 )
    {
        head = head->next;
    }
    free(head->next);
    head->next = 0;
}


int Remove_NodeFromFirst(Node_T**head)
{
    Node_T*temp = *head;

    if (temp == 0)
    {
        return 0;
    }
    *head = (*head)->next;
    free(temp);
    return 1;
}
int Remove_Node(Node_T**ptrhead,int olddata)
{
    Node_T*temp;
    Node_T*current = *ptrhead;
    if (*ptrhead == 0){
        return 0;
    }
    else if((*ptrhead)->data == olddata)
    {
        temp = *ptrhead;
        *ptrhead=(*ptrhead)->next;
        free(temp);
    }
    else
    {
        while(current->next != NULL_POINTER)
        {
            if (current->next->data == olddata)
            {
                temp = current->next;
                current->next = current->next->next;
                free(temp);
                return 1;
            }
            current = current->next;
        }
        return 0;
    }
}

int Remove_NodeFromMiddle(Node_T*head,int data)
{
    Node_T*temp = head;

    while(head != 0)
    {

        if (head->next->data == data)
        {
            temp = head->next;
            free(temp);
            head->next = head->next->next;
            return 1;
        }
        head = head->next;
    }
    return 0;
}

void displayReverse(Node_T* node) {
    if (node == 0) {
        return;
    }
    displayReverse(node->next);
    printf("%d    ", node->data);
}


// O(n^2)

void Reverse_list(Node_T*node)
{
    Node_T *current = node;
    int size=0;
    while(current->next != 0)
    {
        current = current->next;
        size++;
    }

    while((size) >= 0)
    {
        current = node;
        for (int i= 0;i < size;i++)
        {
            current = current->next;
        }
        printf("%d   ",current->data);
        size--;
    }
}

void Reverse_listusing_Array_ofAddresses(Node_T*node)
{
    Node_T *current = node;
    Node_T* array[100];
    int i=0;
    while(current != 0)
    {

        array[i]=current;
        current = current->next;
        i++;

    }
    for (int j= i-1 ;j>=0;j--)
    {
        printf("%d     ",array[j]->data);
    }

}
