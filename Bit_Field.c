
// C program to demonstrate use of Bit-fields
#include <stdio.h>

// Space optimized representation of the date
typedef struct date {
    // d has value between 0 and 31, so 5 bits
    // are sufficient
    char d : 3;

    // m has value between 0 and 15, so 4 bits
    // are sufficient
    char m : 4;

    char y ;
}Bit_Field;
int main()
{


    printf("Size of date is %lu bytes\n",sizeof(Bit_Field));
    Bit_Field dt = { 4, 16, 255 };
    printf("Date is %d/%d/%d", dt.d, dt.m, dt.y);
    return 0;
}
