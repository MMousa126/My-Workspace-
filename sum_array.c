#include <stdio.h>
#include <stdlib.h>

/* why make pointer to array because i don't wanna copy all array to save memory take the address of array */
int sum_array (int *arr,unsigned int size ) 
{
    int i,sum = 0;
    for (i=0; i<size; i++)
    {
        sum += arr[i];

    }
    return sum;

}

int main()
{
    int arr[10]={1,2};

    printf("%d",sum_array(arr,10));

    return 0;

}
