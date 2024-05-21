#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*
    Increment_x();
    Increment_x();
    Increment_x();
    Increment_x();
    Increment_x();

    int z=Get_Copy_X();
    printf("copy of x = %d\n\n ",z);
    Increment_x();
    Increment_x();
    Increment_x();
    Increment_x();
    Increment_x();

    printf("copy of x = %d\n\n ",z);*/


    Increment_x();
    Increment_x();
    Increment_x();
    Increment_x();
    Increment_x();
    int *z = Get_address_x();
    printf("address can be modified of x = %d\n\n ",*z);
    Increment_x();
    Increment_x();
    Increment_x();
    Increment_x();
    Increment_x();

    printf("address can be modified of x = %d\n\n ",*z);

    return 0;
}
