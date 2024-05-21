#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x,y,i;
    while(1)
    {
        scanf("%d%d",&x,&y);
        if (x>y)
        {
            int temp =x;
            x=y;
            y=temp;
        }

        for (i=x; i<=y; i=i+1)
        {

            if (i%3==0)
                printf(" %d ",i);
            else
                printf(" Not ");

        }
        printf("\n ===========================================\n");
    }
    return 0;
}
