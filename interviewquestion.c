#include <stdlib.h>

typedef struct
{
	char c;
	char c1;
	char c2;
	char c3;
}STD_U;

int main()
{
	/* here i want to print in this array in the first byte -> 1 , second byte -> 2 ,third byte -> 3 ,fourth byte -> 4 in
	   one time */
    char arr[4]={0};
	int *p = arr;
	*p = 67305985;
	
	/* another answer */
	*(int*)arr = 0x04030201;	
	
	/**************************************************************************************************/
	printf("%d		%d		%d 		%d ",arr[0],arr[1],arr[2],arr[3]);
	
	
	/******************************************************************************************************/
	
	/* look here */
	int x = 300;
	STD_U *p;
	*p = &x;
	p->c1 = 2;
	printf("%d ",x);
	
	
	
	STD_U s;
	
	*((int*)&s) = 1000; /* this is equal to int *p1 = &s;
							*p1 = 1000; 				*/
	
	
}