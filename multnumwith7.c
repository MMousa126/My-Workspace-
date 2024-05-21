#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number;
    while(1)
    {
        printf("the number u want to *7 =   ");
        scanf("%d",&number);

        number = (number<<3) - number;
        printf("result is %d \n ",number);

    }



return 0;
}

