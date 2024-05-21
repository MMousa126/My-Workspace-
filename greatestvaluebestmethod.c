#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int Num1,Num2,Num3,Num4,max;
    printf("Enter The Numbers ");
    scanf("%d%d%d%d",&Num1,&Num2,&Num3,&Num4);
	max = Num1;
    if (Num2>max)
		max = Num2;
	if (Num3>max)
		max = Num3;
	if (Num4>max)
		max = Num4;
	printf("the greatest Number is %d ",max);
	

    return 0;
}
