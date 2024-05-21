#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x = 3000000000 , y = 2000000000 ;
    unsigned long long z = x+y;

    printf("%u            %u             %llu        %llu      ",x ,y,z ,x+y);

    return 0;
}
