#include <stdio.h>
#include <stdlib.h>

void Swap(int *Num1,int *Num2)
{
    int temp = *Num1;
    *Num1 = *Num2;
    *Num2 = temp;
    /* *Num1 = *Num1^*Num2;
       *Num2 = *Num1^*Num2
       *Num1 = *Num2^*Num1*/
}

int main()
{
    unsigned int num,num1 ;
    scanf("%d%d",&num,&num1);
    Swap(&num,&num1);
    printf("%d      %d \n",num,num1);
    return 0;

}
