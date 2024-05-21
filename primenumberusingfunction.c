#include <stdio.h>
#include <stdlib.h>

int Prime_Number(int Number)
{
    int i,flag=1;
    if (Number<2)
        return 0;
    for (i = 2; i<Number; i++)
    {
        if (Number%i == 0)
            flag = 0;

    }
    return flag;
}

int main()
{
    unsigned int num;
    while(1)
    {
        printf("please Enter the Number ");
        scanf("%d",&num);
        /*
        if (Prime_Number(num) == 1 )
        {
            printf("this is prime number \n");
        }
        else
            printf("Not prime number \n");*/

        /* prime number smaller than the number */
        for (int i =0; i<=num; i++)
        {

            if (Prime_Number(i) == 1)
                printf("this is prime number %d \n",i);


        }
        
    }
    return 0;

}
