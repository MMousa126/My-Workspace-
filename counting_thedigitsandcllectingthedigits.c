#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,counter=0,remender,digitscount = 0;
    while(1)
    {
        printf("please enter the number  ");
        scanf("%d",&num);


        if (num < 0)
            num *= -1;
        while (num != 0)
        {
            remender = num%10;
            counter+=remender;
            num= num/10;
            digitscount++;

        }

        printf("the total is %d\n",counter);
        printf("the total Number of digits is %d\n",digitscount);
        counter=0;
    }
    return 0;
}
