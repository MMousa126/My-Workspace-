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
		while(number>0)
		{
			c=c+(number&1);
			number = number >> 1; 
		}
		
        printf("%d\n",counter);
        printf("%d\n",i);
    }
    return 0;
}

