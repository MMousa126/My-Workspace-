#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char number,i,counter;
    while(1)
    {
        counter = 0;
        printf("the number u want to know how many ones are there ");
        scanf("%d",&number);

        for (i=0;i<(sizeof(char)*8);i++)
        {

            if ((number>>i)&0x01)
            {
                counter++;
            }
        }
        printf("%d\n ",counter);
    }
return 0;
}

