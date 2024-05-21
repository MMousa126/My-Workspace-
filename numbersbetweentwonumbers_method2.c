#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int i,greatnum, smallnum ;
    printf("please enter the great number ");
    scanf("%d",&greatnum);
    printf("please enter the small number ");
    scanf("%d",&smallnum);
    /* if the user change up the numbers*/
    if ((greatnum<smallnum))
    {
            int swap = greatnum;
            greatnum = smallnum;
            smallnum = swap;
			/*
			another way for swaping 
			
			greatnum = greatnum + smallnum;
            smallnum = greatnum - smallnum;
            greatnum = greatnum - smallnum;
			
			another way for swaping
			
			greatnum = greatnum ^ smallnum;
			smallnum = greatnum ^ smallnum;
			greatnum = greatnum ^ smallnum;		
			
			*/
    }
        for (i = greatnum-1 ; i>smallnum; i--)
        {
            printf("%d   ",i);
        }


    return 0;
}
