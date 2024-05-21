
#include"Stack.h"



int stack[MaxStack_Size];

/* index of stack array */
int Stack_Pointer = 0;/* carry the index of the next empty element */


int Push_In_Stack(int data)
{
    if (Stack_Pointer == MaxStack_Size)
    {
        return Full_Stack; /* Full_Stack = 0 */
    }
    else
    {
        stack[Stack_Pointer]= data;
        Stack_Pointer++;
        return Valid_Stack; /* Valid_Stack = 1 */
    }
}


int Pop_From_Stack(int *ptr_data)
{
    if (Stack_Pointer == 0)
    {
        return Empty_Stack; /* Empty_Stack = -1 */
    }
    else
    {
        Stack_Pointer--;
        *ptr_data = stack[Stack_Pointer];
        return Valid_Stack;
    }

}

void Create_Stack(StruckStack_T *ptr_s)
{
    ptr_s->STACKPOINTER = 0;
    //return STACK_CREATED;
}

StackState_t Push_In_StructStack(StruckStack_T *ptr_s,int data)
{
    StackState_t state;

    // if (Create_Stack(ptr_s)==STACK_CREATED)
    //{
    if (ptr_s ->STACKPOINTER == MaxStack_Size)
    {
        state =  STACK_FULL;
    }
    else
    {
        ptr_s->STACK[ptr_s ->STACKPOINTER] = data;
        ptr_s ->STACKPOINTER++;
        state = STACK_VALID;
    }
    //}
    //else
    //{
    // Create_Stack(ptr_s);
    //    //Push_In_StructStack(ptr_s,data);
    //    state = STACK_NOT_CREATED;
    //}

    return state;
}
StackState_t Pop_From_StructStack(StruckStack_T *ptr_s,int *ptr_data)
{
    StackState_t state;

    //if (Create_Stack(ptr_s) == STACK_CREATED)
    //{
    if (ptr_s->STACKPOINTER == 0)
    {
        state = STACK_EMPTY;
    }
    else
    {
        ptr_s->STACKPOINTER--;
        *ptr_data = ptr_s->STACK[ptr_s->STACKPOINTER];
        state  = STACK_VALID;
    }
    //}
    //else
    //{
    //Create_Stack(ptr_s);
    //Pop_From_StructStack(ptr_s,ptr_data);
    //state = STACK_NOT_CREATED;
    //}

    return state;
}
/********************************************************************/
void Stack_Create(Stack_Type *pstack,int size)
{
    pstack->size = size;
    pstack->sp = 0;
    pstack->Stack_Array = (Stack_Type*)malloc(sizeof(int)*size);
}



Stack_Type* Stack_Create_Byvalue(int size)
{
    Stack_Type *s;
    s=malloc(sizeof(Stack_Type));/* create struct in runtime because if i want to not save the whole stack in ram as a local variable  */
    s->size = size;
    s->sp = 0;
    s->Stack_Array = (Stack_Type*)malloc(sizeof(int)*size);
    return s;
}


int Push_In_StruStack(Stack_Type*ps,int data)
{
    int state;
    if (ps->sp == ps->size)
    {
        state = Full_Stack;
    }
    else
    {
        ps->Stack_Array[ps->sp] = data;
        ps->sp++;
        state = Valid_Stack;
    }
    return state;
}
int Pop_From_StruStack(Stack_Type *ps,int *ptr_data)
{
    int state;
    if (ps->sp == 0)
    {
        state = Empty_Stack;
    }
    else
    {
        ps->sp--;
        *ptr_data = ps->Stack_Array[ps->sp];
        state =  Valid_Stack;
    }
    return state;
}

void Stack_Delete(Stack_Type *ps)
{
    free(ps->Stack_Array);
    ps->Stack_Array = 0;   /* if want to check about null pointer */
    ps->sp = 0;
    ps->size = 0;
    free(ps);

}
/********************************************************************/
