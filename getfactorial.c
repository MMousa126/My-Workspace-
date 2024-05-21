#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;
    unsigned int result = 1, number;
    while(1)
    {

        printf("enter the number you wanna factorial to ");
        scanf("%d",&number);
        for (i = 1; i<=number; i++)
        {
            result = result*i;
        }
        printf("the factorial is %d \n ",result);
        result = 1;
    }
    return 0;
}

