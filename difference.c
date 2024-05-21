#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pairs(int k, int size, int* arr) 
{
    int i ,j,differance,counter = 0;
    
    for (i=0;i<size;i++)
    {
        for (j=i+1;j<size;j++)
        {
            differance = arr[i] - arr[j];
            if ((differance == k ) || (differance == -k))
            {
                counter++;
            }
        }
    }
    return counter;

}