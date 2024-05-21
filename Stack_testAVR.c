#include<stdio.h>

#define 		STACK_START			0x200
#define			STACK_END			0x2000

char *Function_StackPercentage(void)    /* equation -> (stackend - p)/(stackend-stackstart)*/
{
	char *p =  STACK_START;
	while(1)
	{
		if (*p==0x55)
		{
			p++;
		}
		else
		{
			return p;
		}
	}
}


int main ()
{
	char*ptr;
	for(ptr=STACK_START;ptr <= STACK_END; ptr++ )
	{
		*ptr = 0x55;
	}
}