#include <stdio.h>

int Array_Most_Repeated_mono_checklist(int*arr,int size,int *ptnumber)
{
    int i,max=0, count[10]={0};

    /* for loop on the arr array to find repeated */
    for (i=0;i<size;i++)
    {
        count[arr[i]]++;
    }
    /* for loop on the count array */
    for (i=0;i<10;i++)
    {
        if (count[i]>max)
        {
            max = count[i]; /* how many the number is repeated */
            *ptnumber = i;

        }
    }
    return max;

}

int main ()
{

       int number,array[] = {1,2,5,1,5,5,1,1,4,5,1,1,1,5,5,5,5,5,5,7,7,5,7,4,8,9,5};

       int size = sizeof(array)/sizeof(array[0]);

       
       int result = Array_Most_Repeated_mono_checklist(array,size,&number);

       for (int i = 0; i<size; i++)
       {
           printf(" %d  ",array[i]);
       }

       printf("\n \n no of repeated = %d   the number is repeated = %d    the size of array = %d \n\n",result,number,size);


    return 0;
}