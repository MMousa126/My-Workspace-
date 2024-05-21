#include <stdio.h>
#include <stdlib.h>

void array2D_print(int (*ptr_array)[100],int row,int colume)/*  (*ptr_array)[5] is pointer to array  = ptr_array[][5] */
{
    int i,j;
    for (i=0;i<row;i++)
    {
        for(j=0;j<colume;j++)
        {
            printf("%3d ",ptr_array[i][j]);
        }
        printf("\n");
    }
}
void array_print (int *arr,unsigned int size )
{
    unsigned int i ;
    for (i = 0; i<size;i++)
    {
        printf("%4d",arr[i]);

    }
}
void array2D_print_Z_shap2(int array[][100],int row,int colume)
{
    for (int i= 0;i<row;i++)
    {
        array_print(array[i],colume);
        printf("\n");
    }
}
/* pointer to array */
int main()
{
    int arr[10] = {1,50,3,4,5,8,9,78,5};

    int (*p)[10] = &arr ;

    printf("%d      %d       %d\n\n",p,*p,**p);

    printf("%d      %d       %d      %d\n\n",p+1,*p+1,**p+1,*(*p+1));


    int array[100][100] = {{1,2,3,4,5},{10,20,30,40,50},{100,200,300,400,500}};

    printf("%d      %d        %d      %d       %d     %d\n\n",array,array+1,*(array+1),*(*(array+1)+2),array[1][2],array[0][7]);

    printf("\n\n");
    array2D_print(array,20,20);
    printf("\n\n");

    int *ptr= array;
    for (int i = 0;i<15;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n\n");

    char book[100]/* no of pages*/[10]/* no of lines*/[50]/*no of words*/;

    printf("%d ",sizeof(book));

    return 0;
}



