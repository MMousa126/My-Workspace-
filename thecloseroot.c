#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number,i,flag;
    while(1)
    {
        flag=0;
        printf(" please enter the number you want to know the root ");
        scanf("%d",&number);

/* the optimization is i*i <= number*/
        for (i=1; i*i <=number && flag == 0; i++)
        {
        }

            printf(" The root is %d \n ",i-1);
       




    }
    return 0;
}
