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


        for (i=1; i<number && flag == 0; i++)
        {
            if (i*i == number)
                flag=1;
        }

        if (flag==1)
            printf(" The Number is square to %d \n ",i-1);
        else
            printf(" Number is NOt square \n");
/* to calculate the number of iteration */
        printf("NO Of Iterations %d \n",i-1);



    }
    return 0;
}
