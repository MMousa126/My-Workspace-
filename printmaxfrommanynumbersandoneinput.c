#include <stdio.h>
#include <stdlib.h>

/* code if i want take number from user and print the max  */
int func (int number)
{
    static int max;
	
	static int counter =0; /* for knowing how many times i colled this function */
	counter++; 

	static char flag =0;/* if i wanna assin the first value of number to max */
	if (flag ==0)
	{
		max = number;
	}
    if (number > max )
    {
        max=number;
    }

    return max;  
}
int main()
{
    int max,num;
    while (1)
    {
        scanf("%d",&num);
        max = func(num);
        printf("max is %d\n",max);

    }
    return 0;
}

