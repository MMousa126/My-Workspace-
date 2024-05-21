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
    unsigned int counter, num;
    while(1)
    {
        counter = 0;
        printf("please Enter the Number ");
        scanf("%d",&num);

        for (int i =0; counter<num ; i++)
        {

            if (Prime_Number(i) == 1)
            {
                printf("this is prime number %d \n",i);
                counter++;

            }

        }
printf("\n======================================\n\n");

    }
    return 0;

}
