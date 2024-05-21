#include <stdio.h>
#include <stdlib.h>

static int max,min;

void Take_Number(int number)
{
    static int counter = 0;
    if (counter==0)
    {
        max=number;
        min=number;
        counter=1;
        return ;

    }
    if (number>max)
        max = number;
    if (number<min)
        min = number;

}

int Max_Number (void)
{
    return max;
}

int Min_Number (void)
{
    return min;
}
