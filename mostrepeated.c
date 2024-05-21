int Array_Most_Repeated(int*arr,int size,int *ptnumber)
{
    int i,j,counter=0,max=0;

    for (i=0; i<size; i++)
    {
        for (j=i; j<size; j++)
        {
            if (arr[i]==arr[j])
            {
                counter++;
            }
        }
        if (counter > max )
        {
            max = counter;

            *ptnumber = arr[i];
        }
        counter =0;
    }

    return max;
}
int main ()
{
    int array[] = {1,2,5,1,54,445,15,1,25,154,15,15,15,1,5,55,5,5,5,5,78,7847,485,547,4,48,98,5};

    int size = sizeof(array)/sizeof(array[0]);

    int num;

    int Result = Array_Most_Repeated(array,size,&num);

    for (int i = 0; i<size; i++)
    {
        printf(" %d  ",array[i]);
    }

    printf("\n %d    %d      %d \n\n",Result,num,size);

    return 0;
}
