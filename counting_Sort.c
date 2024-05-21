#include <stdio.h>

void Counting_sort_mononumfrom0to9(int*arr, int size )
{
    int count[10] = {0},i,j;

    for (i=0;i<size;i++)
    {
        count[arr[i]]++;
    }
    j=0;
    for (i=0;i<10;i++)
    {
        while(count[i] > 0)
        {
            arr[j] = i; // i is the number is founded in array i want to sort 
            count[i]--; // count[i] is number of number repeated 
            j++;
        }
    }

}
int main ()
{

    int number,array[] = {1,2,5,1,5,5,1,1,4,5,1,1,1,5,5,5,5,5,5,7,7,5,7,4,
    8,9,5,1,1,1,1,1,5,1,9,1,5};
    //int arr1[] ={4,1,2,3,10,5,6,8,4,9};

    int size = sizeof(array)/sizeof(array[0]);

    printf("Array Before Sorting \n");
    for (int i =0 ; i<size; i++)
    {
        printf("%d  ",array[i]);
    }
    Counting_sort(array,size);

    printf("\nArray After Sorting \n");
    for (int i =0 ; i<size; i++)
    {
        printf("%d  ",array[i]);
    }




    return 0;

}
