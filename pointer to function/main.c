#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int sub(int x,int y)
{
    return x-y;
}
int add(int x,int y)
{
    return x+y;
}
int divd(int x,int y)
{
    if (y != 0)
        return x/y;
    else
        return 0;
}
int mul(int x,int y)
{
    return x*y;
}

/* callback function */
int func(int x,int y,int (*pf)(int,int))
{
    x++;
    int r=pf(x,y);
    return r;
}

void motor1_on(void)
{
    printf("motor 1 on ");
}


int main()
{
    int (*pf)(int,int);
    pf = add;

    printf("%d     %d      %d       %d\n",pf,add,pf(3,7),add(5,8));

    /* array of pointer to function */
    int (*arr_pf[4])(int,int) = {sub,add,divd,mul};

    printf("%d\n",arr_pf[0](10,5));

    int x,y,op;
    scanf("%d%d%d",&op,&x,&y);

    printf("result = %d\n",arr_pf[op](x,y));

    printf("%d \n",func(x,y,&mul)); /* mul function it have to be the same type of pointer to function */


    timer_set(5,motor1_on);

    printf("\n======================\n");

    timer_done();


    return 0;
}
