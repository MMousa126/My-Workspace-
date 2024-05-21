#include <stdio.h>
#include <stdlib.h>

static int x =10;

int *Get_address_x()
{
    return &x;
}

int Get_Copy_X(void)
{
    return x;
}

void Increment_x(void)
{
    x++;
}
