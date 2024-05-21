

#define     MaxStack_Size        5
#define     Full_Stack           0
#define     Valid_Stack          1
#define     Empty_Stack          -1



typedef enum
{
    STACK_FULL  = 0,
    STACK_EMPTY = -1,
    STACK_VALID = 1,
    STACK_CREATED = 2,
    STACK_NOT_CREATED = -2

}StackState_t;


int Push_In_Stack(int data);
int Pop_From_Stack(int *ptr_data);

/**********************************************************************************/
typedef struct
{
    int STACK[MaxStack_Size];
    int STACKPOINTER;

}StruckStack_T;

StackState_t Push_In_StructStack(StruckStack_T *ptr_s,int data);
StackState_t Pop_From_StructStack(StruckStack_T *ptr_s,int *data);
/**********************************************************************************/

typedef struct
{
    int size;
    int sp;
    int *Stack_Array; /* this is like STACK[MaxStack_Size] but make it dynamic the size */
}Stack_Type;

typedef Stack_Type* STACK;

void Stack_Create(Stack_Type *pstack,int size);
Stack_Type* Stack_Create_Byvalue(int size);

int Push_In_StruStack(Stack_Type*ps,int data);
int Pop_From_StruStack(Stack_Type *ps,int *ptr_data);
void Stack_Delete(Stack_Type *ps);
