#include <stdio.h>
#include <stdlib.h>

void sorting(int *arr,int size)
{
    int i,j;

    for (i=0; i<size-1; i++)
    {
        for (j=0; j<size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }
}
/*
int binary_search(int *arr,int start,int end,int search)
{

    while(start<end)
    {
        int middle = start + (end - start) / 2 ;

        if (search == arr[middle])
        {
            return middle;
        }
        else if (search > arr[middle])
        {
            start = middle+1;
        }
        else
        {
            end = middle - 1;
        }
    }

}*/
int Array_Most_Repeated_mono_checklist(int*arr,int size,int *ptnumber)
{
    int i,max=0, count[10]= {0};

    /* for loop on the arr array to find repeated */
    for (i=0; i<size; i++)
    {
        count[arr[i]]++;
    }
    /* for loop on the count array */
    for (i=0; i<10; i++)
    {
        if (count[i]>max)
        {
            max = count[i]; /* how many the number is repeated */
            *ptnumber = i;

        }
    }
    return max;

}



int Max_number(int*arr,int size,int *ptnumber)
{
    int i,j,counter=0,max=0;

    for (i=0; i<size; i++)
    {

        if(arr[i] > max)
        {
            max = arr[i];
            *ptnumber = i;
        }

    }
    return max;
}

int Array_Most_Repeated_mono_dynamic(int*arr,int size,int *ptnumber)
{
    int max_num = 0,min_num=0,i,max=0,count_size;

    for (i=0; i<size; i++)
    {
        if (arr[i]>max_num)
        {
            max_num = arr[i];
        }
    }

    count_size = max_num - min_num+1; /* count_size = max_num +1 because i am counting from 0 to max_num */

                 int *count = (int *)calloc(count_size,sizeof(int));



    /* for loop on the arr array to find repeated */
    for (i=0; i<size; i++)
    {
        count[arr[i]]++;
    }
    /* for loop on the count array */
    for (i=0; i<count_size; i++)
    {
        if (count[i]>max)
        {
            max = count[i]; /* how many the number is repeated */
            *ptnumber = i;

        }
    }
    return max;


}
/*
int returnf(int n,int *p)
{
    int counter=0, result=0,m;

    while(n > 0)
    {
        m=n%10;
        result +=m;
        n=n/10;
        counter++;
    }
    *p = counter;
    return result;
}
*/

int array_binarysearch (int *arr,int size,int search)
{
    int last,middle,first;

    first = 0;
    last = size-1;

    while(first<=last)
    {
        middle = (first+last)/2;

        if (search==arr[middle])
            return middle;
        else if (search<arr[middle])
            last = middle -1;
        else
            first = middle +1;
    }
    return -1;
}
int main ()
{

    int number,array[] = {1,2,5,1,5,5,1,1,4,5,1,1,1,5,5,5,5,5,5,7,7,5,7,4,8,9,5,15,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51,51};

    int size = sizeof(array)/sizeof(array[0]);

    //sorting(array,size);

    //int Result = array_binarysearch(array,size,154);

    int result = Array_Most_Repeated_mono_dynamic(array,size,&number);

    for (int i = 0; i<size; i++)
    {
        printf(" %d  ",array[i]);
    }

    printf("\n \n no of repeated = %d   the number is repeated = %d    the size of array = %d \n\n",result,number,size);

    /* int number,f;
     scanf("%d",&number);

     int n = returnf(number,&f);

     printf("%d        %d\n",n,f);
    */
    return 0;
}
