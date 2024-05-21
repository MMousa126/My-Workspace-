
#define         Max_Queue           5
#define         Queue_Empty         -1
#define         Queue_Full          0
#define         Queue_Valid         1

int QUEUE_IN(int data);

int QUEUE_OUT(int *ptr_data);


typedef enum
{
    Q_EMPTY=-1,
    Q_FULL =0,
    Q_VALID=1
}QueueStates_t;


QueueStates_t In_Queue(int data);
QueueStates_t Ex_Queue(int *ptr_data);

QueueStates_t Cy_InQueue(int data);
QueueStates_t Cy_DeQueue(int *ptr_data);

