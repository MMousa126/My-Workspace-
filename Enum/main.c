#include <stdio.h>
#include <stdlib.h>

/* This is like sizeof(x) */
#define     MySize(x)                   ((char*)(&x+1) -(char*)(&x))

/* i will make the bit zero and i will write the value to it */
#define     Write_Bit(x,bit,value)       (x=x&~(1<<bit))|(value<<bit)

typedef enum
{

    TRUE = 0xaa,
    FALSE = 0x55

}Boolean_t;


typedef enum
{
    OK,NOK,
    NULL_POINTER,
    OUT_OF_RANGE
}Error_t;



typedef enum
{
    MOTOR_1,
    MOTOR_2,
    MOTOR_3
}Motor_t;



Error_t Get_Motor_Temprature(Motor_t m ,char *Ptr_MotorTemp)
{
    if (Ptr_MotorTemp == NULL_POINTER)
    {
        return NULL_POINTER;
    }
    else if(m > MOTOR_3)
    {
        return OUT_OF_RANGE;
    }
    else
    {
        *Ptr_MotorTemp = 150;
        return OK;
    }

}



typedef enum
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THRUSDAY,
    FRIYDAY,
    SATURDAY
}Day_t;
int main()
{
    int x[10];
    printf("%d    %d\n\n",MySize(x),&x);
    Day_t Today = WEDNESDAY; /* this is like int x = 5 */

    printf("%d     %d     %d \n",sizeof(Today),Today,WEDNESDAY);

    char temp;
    if (Get_Motor_Temprature(MOTOR_2,&temp) == OK)
    {

    }

    return 0;
}
