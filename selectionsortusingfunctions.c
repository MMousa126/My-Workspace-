#include<stdio.h>

void Swaping(int*pa,int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}
int Find_Max_Index(int *arr,int size)
{
    int i,max_index = 0;
    for (i=0;i<size;i++)
    {
        if (arr[i]>arr[max_index])
        {
            max_index = i;
        }
    }
    return max_index;
}
void Selection_Sort(int *arr,int size)
{
    int i,max_index,last = size-1;
    for (i=0;i<size;i++)
    {
        max_index = Find_Max_Index(arr,last+1);
        Swaping(&arr[max_index],&arr[last]);
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
