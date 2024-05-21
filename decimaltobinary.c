#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;
    unsigned char number;
    while(1)
    {

        printf("the number u want to convert to binary ");
        scanf("%d",&number);

        for (i = 7;i>=0;i--) // there is no >= 0 in unsigned
        {
            if ((number>>i)&1)
                printf("1");
            else
                printf("0");
        }

                printf("\n");

    }
    return 0;
}

