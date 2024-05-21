#include<stdio.h>

void Selection_Sort(int *arr,int size)
{
    int i,j,temp,index,last = size-1,max_index=0,counter=0;
    for (i=0; i<size; i++)
    {
        max_index=0;
        for (j=0; j<=last; j++)
        {
            if (arr[j]>arr[max_index])
            {
                max_index = j;
            }
        }
        temp = arr[max_index];
        arr[max_index] = arr[last];
        arr[last] = temp;
        last--;
    }
}

int main ()
{

    int number,array[] = {1,2,5,1,5,5,1,1,4,5,1,1,1,-5,-5,5,5,5,5,7,7,5,7,4,8,9,5,-15,51,-51,51,-51,51,51,51,51,51,51,51,51,51,51,51,51};

    int size = sizeof(array)/sizeof(array[0]);

    Selection_Sort(array,size);

    for (int i =0 ; i<size; i++)
    {
        printf("%d  ",array[i]);
    }


    return 0;
}
