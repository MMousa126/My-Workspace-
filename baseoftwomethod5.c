#include <stdio.h>
#include <stdlib.h>

unsigned int baseoftwo (unsigned int number )
{
    if (number == 0)
        return 0;

    if (0x80000000%number == 0) /* the largest number in unsigned int*/
        return 1;
    else
        return 0;

}
unsigned int baseoftwo_2 (unsigned int number )
{
    if (number == 2||number == 4||number == 8||number == 16||number == 32||number == 64||number == 128||number == 256)
        return 1;
    else
        return 0;
}
/* another */
unsigned int baseoftwo_3 (unsigned int number )
{
    if (number == 0)
        return 0;

	if (number&(number-1) == 0)
		return 1;
	else 
		return 0;

}
unsigned int baseoftwo_4 (unsigned int number )
{
	return number && !(&(number-1));
}
int main()
{
    unsigned int num;
    while(1)
    {
        printf("please enter the number you want to know is it base of two or Not ");
        scanf("%d",&num);
        if (baseoftwo(num))
            printf("the number is base of two \n");
        else
            printf("Not\n");


    }
    return 0;

}
