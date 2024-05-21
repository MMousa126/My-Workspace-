#include<stdio.h>

int Array_Most_Repeated_mono_dynamic(int*arr,int size,int *ptnumber)
{
    int max_num =arr[0],min_num=arr[0],i,max=0,count_size;

    for (i=0; i<size; i++)
    {
        if (arr[i]>max_num)
        {
            max_num = arr[i];
        }
        if (arr[i]<min_num)
        {
            min_num = arr[i];
        }
    }
	/* if i have 3numbers so how many propability i have ? 3+1 = 4 */
    count_size = max_num - min_num+1; /* count_size = max_num +1 because i am counting from 0 to max_num */

                 int *count = (int *)calloc(count_size,sizeof(int));

    /* for loop on the arr array to find repeated */
    for (i=0; i<size; i++)
    {
        count[arr[i]-min_num]++;
    }
    /* for loop on the count array */
    for (i=0; i<count_size; i++)
    {
        if (count[i]>max)
        {
            max = count[i]; /* how many the number is repeated */
            *ptnumber = i+min_num;

        }
    }
    return max;


}


int main ()
{

    int number,array[] = {1,2,5,1,5,5,1,1,4,5,1,1,1,-5,-5,5,5,5,5,7,7,5,7,4,8,9,5,-15,51,-51,51,-51,51,51,51,51,51,51,51,51,51,51,51,51};

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
