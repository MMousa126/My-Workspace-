#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number,i,flag;
    while(1)
    {
        flag=0;
        printf(" please enter the number you want to know the square ");
        scanf("%d",&number);

/* the optimization is i*i <= number*/
        for (i=1; i*i <=number && flag == 0; i++)
        {
            if (i*i == number)
                flag=1;
        }

        if (flag==1)
            printf(" The Number is perfect square to %d \n ",i-1);
        else
            printf(" Number is NOt perfect square %d \n",i-1);
/* to calculate the number of iteration */
        printf("NO Of Iterations %d \n",i-1);



    }
    return 0;
}
