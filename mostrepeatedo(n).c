
/* in asorted array */
int Array_Sorted_Most_Repeated(int*arr,int size,int *ptnumber)
{
    int i,j,counter=0,max=0;

    for (i=0;i<size-1 ;i++)
    {
        if (arr[i] == arr[i+1])
        {
            counter++;
        }
        else
        {
            counter = 0;
        }
        if (counter > max )
        {
            max = counter;
            *ptnumber = arr[i];
        }


    }



    return max+1;
}
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
int main ()
{
    int array[] = {1,2,5,1,54,445,15,1,25,154,15,15,15,1,5,55,5,5,5,5,78,7847,485,547,4,48,98,5};

    int size = sizeof(array)/sizeof(array[0]);

    sorting(array,size);

    int num;

    int Result = Array_Sorted_Most_Repeated(array,size,&num);

    for (int i = 0; i<size; i++)
    {
        printf(" %d  ",array[i]);
    }

    printf("\n %d    %d      %d \n\n",Result,num,size);

    return 0;
}