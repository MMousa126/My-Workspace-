#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int grade,result;
    printf("please enter your grade ");
    scanf("%d",&grade);

    if ((grade%5)==0) /* if enter 55 will print 55 */
        printf("your grade is %d ",grade);

    else if (grade%5==1 || grade%5==2) /* if enter 51 or 52 will print 50 */
    {
        if (grade%5 == 1)
        {
            result=grade-1;
            printf("your grade is %d ",result);

        }
        else
        {
            result=grade-2;
            printf("your grade is %d ",result);
        }

    }

    else if (grade%5 ==3 || grade%5 ==4  )/* if enter 53 or 54 will print 55 */
    {

        if (grade%5 == 3)
        {
            result=grade+2;
            printf("your grade is %d ",result);

        }
        else
        {
            result=grade+1;
            printf("your grade is %d ",result);
        }
    }

    return 0;
}
