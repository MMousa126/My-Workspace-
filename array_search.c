#include <stdio.h>
#include <stdlib.h>

int Search_array (int *arr,unsigned int size ,int search) /* why make pointer to array because i don't wanna copy all array to save memory take the address of array */
{
    int i;
    for (i=0;i<size;i++)
    {
        if (search == arr[i])
            return i;

    }
        return -1;
}

int main()
{
    int search, arr[10]={1,2,5,6,85,78,59};

    search = Search_array(arr,10,5);

    printf("%d",search);

    return 0;

}
