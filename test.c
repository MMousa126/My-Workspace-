#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short totalnumber,counter=0,i,flag,n;
    while(1)
    {
        flag=0;
        printf(" please enter the number ");
        scanf("%d",&totalnumber);

        counter = 0;

        for (n=2;; n++)
        {
            flag=0;

            for (i=2; i<=n/2 && flag == 0; i++)
            {
                if (n%i == 0)
                    flag=1;
            }
            if (flag==0)
                counter++;
        }

    }



return 0;
}

