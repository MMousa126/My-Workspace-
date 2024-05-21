#include <stdio.h>
#include <stdlib.h>



int BaseofTwo (int Number)
{
    int sum = 0;
    while(Number)
    {
        sum += Number&1;
        Number>>=1;
    }
    if (sum==1)
        return 1;
    else
        return 0;
}



int main()
{
    int num;
    while(1)
    {
        scanf("%d",&num);
        if (BaseofTwo(num))
            printf("Number is base of 2\n ");
        else
            printf("Number is not base of 2\n ");
    }
    return 0;

}
