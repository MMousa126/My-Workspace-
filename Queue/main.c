#include <stdio.h>
#include <stdlib.h>
#include"Queue.h"

int main()
{

    int x, y;
    printf("Enter any number to push it in the queue enter zero if want to pop from queue \n");
    while(1)
    {
        scanf("%d",&x);
        if (x!=0)
        {
            if (QUEUE_IN(x) == Queue_Full )
            {
                printf("Queue is Full\n");
            }
            else
            {
                printf("%d is Pushed in Queue\n",x);
            }
        }
        else
        {
            if (QUEUE_OUT(&y) == Queue_Empty)
            {
                printf("Queue is Empty\n");
            }
            else
            {
                printf("%d the element you want to pop\n",y);
            }
        }
    }
    return 0;
}

