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
int Primenumbetweentonumbers(int Num1,int Num2)
{
    int i,counter = 0;
    if (Num2<Num1)
    {
        int temp = Num2;
        Num2 = Num1;
        Num1 = temp;
    }
    for (i=Num1; i<=Num2; i++)
    {
        if (Prime_Number(i))
        {
            printf("prime number %d \n",i);
            counter++;

        }
    }
    return counter;

}

int main()
{
    unsigned int counter, num,num1,end;
    while(1)
    {
        counter = 0;
        printf("please Enter the Number 1 ");
        scanf("%d",&num);
        printf("please Enter the Number 2 ");
        scanf("%d",&num1);

        end = Primenumbetweentonumbers(num,num1);
        printf("\nthe counter of numbers is %d\n",end);



        printf("\n======================================\n\n");

    }
    return 0;

}
