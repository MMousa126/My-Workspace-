#include <stdio.h>
#include <stdlib.h>

void array_print (int *arr,unsigned int size ) /* why make pointer to array because i don't wanna copy all array to save memory take the address of array */
{
    unsigned int i ;
    for (i = 0; i<size;i++)
        printf("%d           %d\n",arr[i],*(arr+i)); /* you can write that or this */

}

int main()
{
    int arr[10]={20,3,32,52,544,158,18,5487,549,5415};

    array_print(arr,10);

    return 0;

}
