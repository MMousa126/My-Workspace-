
#include <stdio.h>
#include <stdlib.h>

int StringtoInteger2 (char *string,int *ptnumber)
{
    int i,number=0;
    for (i=0; string[i]; i++)
    {
        if (string[i]>= '0' && string[i] <= '9')
        {
            number =number*10 +(string[i] - '0');
        }
        else
            return 0;
    }
    *ptnumber = number;/* and pointer return the number that is stander */
    return 1; /* return says that the function is failed or succeed that is stander to ask with if  */
}
int main()
{
	    char strring101[100]="121mkn455";

    int y;

    if (StringtoInteger2(strring101,&y))
        printf("%d\n\n",y);
    else
        printf("the input was not right\n\n");
	return 0;
}
