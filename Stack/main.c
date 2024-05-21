#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"


int main()
{
/*
    int x , y;
    printf("Enter any number to push it in the stack enter zero if want to pop from stack ");
    while(1){
    scanf("%d",&x);
    if (x!=0)
    {
        if (Push_In_Stack(x) == Full_Stack )
        {
            printf("Stack is Full\n");
        }
        else
        {
            printf("%d is Pushed in Stack\n",x);
        }
    }
    else
    {
        if (Pop_From_Stack(&y) == Empty_Stack)
        {
            printf("Stack is Empty\n");
        }
        else
        {
            printf("%d the element you want to pop\n",y);
        }
    }
    }
  */  //return 0;
/************************************************************************************************************/
/*
    int x ;
    StruckStack_T y;
    Create_Stack(&y);
    printf("Enter any number to push it in the stack enter zero if want to pop from stack ");
    while(1){
    scanf("%d",&x);
    if (x!=0)
    {
        if (Push_In_StructStack(&y,x) == STACK_FULL )
        {
            printf("Stack is Full\n");
        }
        else
        {
            printf("%d is Pushed in struct Stack\n",x);
        }
    }
    else
    {
        if (Pop_From_StructStack(&y,&x) == STACK_FULL)
        {
            printf("Stack is Empty\n");
        }
        else
        {
            printf("%d the element you want to pop\n",x);
        }
    }
    }*/

    /*******************************************************************************************************/
    STACK S1,S2;

    S1 = Create_Stack(&S1);
    Push_In_StruStack(&S1,20);

}
