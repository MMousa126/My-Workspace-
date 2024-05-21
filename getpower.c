#include <stdio.h>
#include <stdlib.h>

int Get_Power(int Number,int Power);

int main()
{
   unsigned int end,num,power;
    while(1)
    {
        printf("please Enter the Number ");
        scanf("%d",&num);
        printf("Please enter the power ");
        scanf("%d",&power);
        end = Get_Power(num,power);
        printf("the number is %d \n",end);
    }
    return 0;
}

int Get_Power(int Number,int Power)
{
    unsigned int i,result =1 ;

    for (i= 0; i<Power; i++)
    {
        result = result*Number;

    }
    return result;

}
