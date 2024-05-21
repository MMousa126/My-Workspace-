
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int Num1 ,Num2,Num3;
    printf("Enter The Numbers ");
    scanf("%d%d%d",&Num1,&Num2,&Num3);

    if (Num1 > Num2 )
	{
		if (Num1 > Num3)
			printf("the greatest Number is %d ",Num1);
		else
			printf("the greatest Number is %d ",Num3);
		
	}
	else 
	{
		if (Num2 > Num1 )
	{
		if (Num2 > Num3)
			printf("the greatest Number is %d ",Num2);
		else
			printf("the greatest Number is %d ",Num3);
		
	}
	}
	

return 0;
}