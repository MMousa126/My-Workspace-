
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int Num1 ,Num2,Num3,Max;
    printf("Enter The Numbers ");
    scanf("%d%d%d",&Num1,&Num2,&Num3);

    if (Num1 > Num2 )
	{
		if (Num1 > Num3)
			Max = Num1;
		else
			Max = Num3;
	}
	else 
	{
		if (Num2 > Num1 )
	{
		if (Num2 > Num3)
			Max = Num2;
		else
			Max = Num3;
		
	}
	}
	printf("the greatest Number is %d ",Max);
	

return 0;
}