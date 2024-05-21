+#include <stdio.h>
#include <stdlib.h>


int Get_Bit(int Reg, int Bit_no)
{
    int bit_state = ((Reg >> Bit_no)&1);
    return bit_state;

}
int main()
{
    int num,result,counter = 0;
    while(1)
    {
        counter = 0;
        printf("please enter the number you want to know is it base of two or Not ");
        scanf("%d",&num);
        for (int i =0; i<32; i++)
        {
            result = Get_Bit(num,i);
            if (result == 1)
                counter++;
			
			if (counter > 1)
				return 0;

        }
        if (counter == 1)
            printf("the number is base of two \n");
        else
            printf("the number is Not base of two \n");
    }
    return 0;

}
