#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;

    while(1)
    {
        fflush(stdin); /* handling the buffer */
        printf("please enter the character ");
        scanf("%c",&x);

        if (x >= 'a' && x<= 'z')
		{
			/* to convert small to capital */
			x= x -'a' + 'A';
			printf("the character is %c  and the decimal to is %d\n",x,x);

		}
        else if (x >= 'A' && x<= 'Z')
		{
			x= x -'A' + 'a';
            printf("the character is %c  and the decimal to is %d\n",x,x);

		}
            else
                printf("not small or big letter %c and the decimal to is %d \n",x);

    }



return 0;
}
