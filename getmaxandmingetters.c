#include <stdio.h>

int max;
int min;

void tak_num (int num)
{
    static int counter = 0;
    if (counter  == 0)
    {
        max = num ;
        min = num;
        counter++;
        return;
    }
    
    if (num > max)
    {
        max = num;
    }
    
    if (num < min )
    {
        min = num;
    }
    
}

int get_max(void)
{
	return max;
}

int get_min(void )
{
	return min;
}

int main()
{
	int x;
	
	
	while (1)
	{
		scanf("%d",&x);
		
		if (x==0)
		{
			printf("max = %d \n",get_max());
		}
		if (x==1)
		{
			printf("min = %d \n",get_min());
		}
		else{
			tak_num(x);
		}
	}
}


