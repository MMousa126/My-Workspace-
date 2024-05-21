#include <stdio.h>
#include <stdlib.h>


void array_print (int *arr,unsigned int size ) /* why make pointer to array because i don't wanna copy all array to save memory take the address of array */
{
    unsigned int i ;
    for (i = 0; i<size; i++)
        printf("%d  ",arr[i]); /* you can write that arr[i] or this *(arr+i)*/

}

int* Merge_two_arrays(int *arr1,int size1,int *arr2,int size2,int*New_Size )
{
    int i,j;

    int size = size1+size2;

    size = size1>size2 ? size2 : size1;

    size = size * 2;

    int *array_new = (int * ) malloc (size * sizeof(int));

    for (i=0,j=0; i<size; i=i+2)
    {
        array_new[i]=arr1[j];
        array_new[i+1] = arr2[j];
        j++;

    }
    *New_Size = size;

    return array_new;
}
int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {50,40,30,20,10,54,85};
    int newsize;
    int *ptr = Merge_two_arrays(arr1,5,arr2,5,&newsize);

    array_print(ptr,newsize);

    return 0;
}
