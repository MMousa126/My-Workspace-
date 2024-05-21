#include <stdio.h>
#include <stdlib.h>

int baseoftwo (int number )
{
    for(int i =1;i<= number;i=i*2)
    {
        if (number==i)
            return 1;
    }
    return 0;

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
