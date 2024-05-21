
#include"Queue.h"

/*****************************************************/

static int Queue[Max_Queue];
static int Front_Queue = 0;
static int Rear_Queue = -1;
static int Queue_Size = 0;

int QUEUE_IN(int data)
{
    int state;
    if (Queue_Size == Max_Queue)
    {
        state = Queue_Full;
    }
    else
    {
        Rear_Queue++;
        Queue[Rear_Queue] = data;
        Queue_Size++;
        state =  Queue_Valid;

        if (Rear_Queue == Max_Queue - 1)
            Rear_Queue = -1;
    }
    return state;
}


int QUEUE_OUT(int *ptr_data)
{
    int state;
    if (Queue_Size == 0)
    {
        state =  Queue_Empty;
    }
    else
    {

        *ptr_data = Queue[Front_Queue];
        Front_Queue++;
        Queue_Size--;
        if (Front_Queue == Max_Queue )
            Front_Queue = 0;
    }

    return state;
}

/*****************************************************/



/*****************************************************/

static int queue[Max_Queue];
static int inqueue = 0;
static int exqueue = 0;

QueueStates_t In_Queue(int data)
{
    QueueStates_t state;

    if (inqueue ==Max_Queue)
    {
        state = Q_FULL;
    }
    else
    {
        queue[inqueue]=data;
        inqueue++;
        state = Q_VALID;
    }
    return state;
}

QueueStates_t Ex_Queue(int *ptr_data)
{
    QueueStates_t state;
    if (inqueue == exqueue)
    {
        inqueue=0;
        exqueue=0;
        state = Q_EMPTY;
    }
    else
    {
        *ptr_data = queue[exqueue];
        exqueue++;
        state = Q_VALID;
    }
    return state;
}

/*****************************************************/

static int queue[Max_Queue];
static int c_inqueue = 0;
static int c_exqueue = 0;
static int c_flag = 0;

QueueStates_t Cy_InQueue(int data)
{
    QueueStates_t state;

    if ( c_inqueue == Max_Queue )
    {
        c_inqueue = 0;
        c_flag = 1;
    }
    if ((c_inqueue == c_exqueue ) && (c_flag == 1 ))
    {
        state = Q_FULL;
    }
    else
    {
        queue[c_inqueue] =data;
        c_inqueue++;
        state = Q_VALID;
    }
    return state;
}


QueueStates_t Cy_DeQueue(int *ptr_data)
{
    QueueStates_t state;

    if(c_exqueue == Max_Queue)
    {
        c_exqueue = 0;
        c_flag = 0;
    }
    if ((c_exqueue == c_inqueue ) && (c_flag == 0))
    {
        state = Q_EMPTY;
    }
    else
    {
        *ptr_data = queue[c_exqueue];
        c_exqueue++;
        state = Q_VALID;
    }
}

/*****************************************************/
