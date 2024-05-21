#include<stdio.h>

#define 	my_name		"Mohamed Mousa"

#define 	Max(x,y)	((x)>(y)?(x):(y))

#define		SQR_1(c)	c*c

#define		SQR(c)		((c)*(c)) 	

int main()
{
	int y=5,x=5;
	
	//int z= Max(x++,++y);
	
	/* ((x++)>(++y)?(x++):(++y))  --------->  ((5)>(6)?(x++):(7))   */
	
	//printf("%d    %d    %d \n\n",x,y,z);
	
	printf("%d    %d    %d \n",SQR_1(x+5),SQR(x+5),Max(20,40));
	printf("%s",my_name);
	return 0;
}