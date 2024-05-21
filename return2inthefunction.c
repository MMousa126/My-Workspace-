#include <stdio.h>
#include <stdlib.h>

char add_func(unsigned char n1,unsigned char n2,unsigned char *psum)
{
    unsigned char result;

    result= (n1/2)+(n2/2);
    if (result>127)
        return 0;
    else
    {
        *psum = n1+n2;
        return 1;
    }

}



int main()
{

    unsigned char num1 =100,num2=100,sum;
    if (add_func(num1,num2,&sum))
        printf("%d",sum);
    else
        printf("over flow");

    return 0;

}
