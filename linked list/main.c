
#include<stdio.h>
#include"linked_list.h"


int main()
{
    Node_T *h =0; /* this is the head that point to struct */

    h=Create_Node(5);
    h->next=Create_Node(7);
    h->next->next=Create_Node(9);

    Add_NodeToLast(18,&h);
    Add_NodeToLast(22,&h);

    Print_LinkedList(h);

    printf("\n==========================================\n");

    printf("%d       %d       %d       %d       %d",h->data,h->next->data,h->next->next->data,h->next->next->next->data,h->next->next->next->next->data);

    Edit_Node(h,18,255);

    printf("\n==========================================\n");

    Print_LinkedList(h);

    printf("\n==========================================\n");

    Add_NodeToFirst(45,&h);
    Add_NodeToFirst(100,&h);
    Add_NodeToFirst(200,&h);

    Print_LinkedList(h);



    printf("\n==========================================\n");

    Insert_After(h,7,4825);

    Print_LinkedList(h);

    printf("\n==========================================\n");

    Insert_After(h,200,8888);

    Print_LinkedList(h);

    printf("\n==========================================\n");

   // Remove_NodeFromEnd(h);

    Remove_NodeFromFirst(&h);

    Remove_NodeFromMiddle(h,4825);

    Print_LinkedList(h);
    printf("\n==========================================\n");

    displayReverse(h);

    Remove_Node(&h,7);

    printf("\n==========================================\n");
    Reverse_list(h);

    printf("\n==========================================\n");

    Reverse_listusing_Array_ofAddresses(h);

    int x=10;
    x = ++x;
    printf("\n%d \n",x);
    return 0;
}
