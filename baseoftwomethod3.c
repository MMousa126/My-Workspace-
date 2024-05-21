#include <stdio.h>
#include <stdlib.h>

int baseoftwo (int number )
{
    if (number == 0)
        return 0;

    while (number>1)
    {
        if (number%2 != 0)
            return 0;
        else
            number=number/2;
    }
    return 1;

}
int main()
{
    int num;
    while(1)
    {
        printf("please enter the number you want to know is it base of two or Not ");
        scanf("%d",&num);
        if (baseoftwo(num))
            printf("the number is base of two \n");
        else
            printf("Not\n");


    }
    return 0;

}
