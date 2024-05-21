#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int grade,remender;
    printf("please enter your grade ");
    scanf("%d",&grade);

    remender = grade %5 ;

    if (remender<= 2)
    {
        grade = grade -remender;
        printf("your grade is %d ",grade);

    }
    else
    {
        grade = grade -remender +5;
        printf("your grade is %d ",grade);
    }



    return 0;
}
