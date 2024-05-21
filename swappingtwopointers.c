#include<stdio.h>

//swapping tow pointers

void swap_pointers(int **p,int **p2)
{
    int *temp = *p;
    *p = *p2;
    *p2 = temp;
}

void swap_numbers(int *p,int *p2)
{
    int temp = *p;
    *p = *p2;
    *p2 = temp;
}

int main ()
{

    int x=5,arr[100], y=7;
    int *p= &x ,*p2 = &y;
	

    swap_pointers(&p,&p2);
	swap_numbers(p,p2);

    printf("p = %d     p2 = %d	 x = %d		y = %d",*p,*p2,x,y);
	
	/* p = 5     p2 = 7         x = 7          y = 5 */

    return 0;
}

