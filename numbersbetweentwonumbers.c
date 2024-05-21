#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int i,greatnum, smallnum ;
    printf("please enter the great number ");
    scanf("%d",&greatnum);
    printf("please enter the small number ");
    scanf("%d",&smallnum);
    if (!(greatnum<smallnum))
    {
        for (i = greatnum-1 ; i>smallnum; i--)
        {
            printf("%d   ",i);
        }
    }
    else
    {
        printf("the smallest number is bigger than the great number ");
    }





    return 0;
}
