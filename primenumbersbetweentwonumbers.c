#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number1,number2,i,flag,n,temp;
    while(1)
    {
        flag=0;
        printf(" please enter the number ");
        scanf("%d",&number1);
        printf(" please enter the number ");
        scanf("%d",&number2);
		if (number1>number2)
		{
			temp = number1;
			number1 = number2;
			number2 = number1;
		
		}

            for (n=number1; n<=number2; n++)
            {
                flag=0;

                for (i=2; i<=n/2 && flag == 0; i++)
                {
                    if (n%i == 0)
                        flag=1;
                }
                if (flag==0)
                    printf(" The Number is prime %d\n ",n);

            }
            /* to calculate the number of iteration */

            //else
            //    printf(" Number is NOt prime \n");
//
            //  printf("NO Of Iterations %d \n",i-1);


    }
    return 0;
}
