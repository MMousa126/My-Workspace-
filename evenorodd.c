#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number;
    while(1)
    {
        printf("the number u want to know weather it is even or odd  ");
        scanf("%d",&number);

        if (number & 1 == 1)
            printf("the number is odd\n");
        else
            printf("the number is even\n");

    }



return 0;
}

