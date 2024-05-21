#include<stdio.h>

void Bubble_Sort(int *arr,int size)
{
    int i,j,temp,sorted_flag = 0;
    for (i=0;i<size;i++)
    {
        sorted_flag = 1;
        for (j=0;j<size-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                sorted_flag=0;
            }
        }
        if (sorted_flag==1)
        {
            break;
        }
    }
}

int main ()
{

    int number,array[] = {1,2,5,1,5,5,1,1,4,5};

    int size = sizeof(array)/sizeof(array[0]);
	
	printf("%d ",size);

    
    return 0;
}
