#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,total=0,num2;
    while(1) /* for (;;)*/
    {


        printf("please enter the total numbers ");
        scanf("%d",&num);
        for (i =0; i<num; i++)
        {
            printf("\nplease enter the numbers ");
            scanf("%d",&num2);


            total+=num2;


        }
        printf("\nthe total numbers is %d \n",total);
        total = 0;
    }
    return 0;
}
