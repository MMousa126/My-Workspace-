#include <stdio.h>
#include <stdlib.h>
int Get_Factorial(int Number);

int main()
{
    int end;
    end = Get_Factorial(5);
    printf("the factorial is %d ",end);
    return 0;
}

int Get_Factorial(int Number)
{
    int result = 1, i;
    for (i = 1; i <= Number; i++)
    {
        result = result * i;
    }
    return result;
}
