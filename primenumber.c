#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number,i,flag;
    while(1)
    {
        flag=0;
        printf(" please enter the number you want to know the prime ");
        scanf("%d",&number);

        if (number == 1 || number == 0)
            printf("There is no prime for 0 & 1 \n ");
            else{
        for (i=2; i<=number/2 && flag == 0; i++)
        {
            if (number%i == 0)
                flag=1;
        }
        /* to calculate the number of iteration */
        if (flag==0)
            printf(" The Number is prime \n ");
        else
            printf(" Number is NOt prime \n");

        printf("NO Of Iterations %d \n",i-1);
    }
    }
    return 0;
}
