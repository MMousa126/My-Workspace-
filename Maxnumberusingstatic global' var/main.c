#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x;

    while(1)
    {
        scanf("%d",&x);
        if (x==1)
            printf("the max is %d \n",Max_Number());
        else if (x==0)
            printf("the min is %d \n",Min_Number());
        else
            Take_Number(x);


    }
    return 0;
}

