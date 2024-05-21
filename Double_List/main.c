#include <stdio.h>
#include <stdlib.h>
#include"Double_List.h"

int main()
{
    LIST L1;
    L1 = Creat_DoubleList();

    DoubleList_AddToFirst(7,L1);
    DoubleList_AddToFirst(9,L1);
    DoubleList_AddToFirst(11,L1);
    DoubleList_AddToFirst(13,L1);
    DoubleList_AddToFirst(15,L1);
    DoubleList_AddToLast(17,L1);
    DoubleList_print(L1,FIRST_TO_LAST);
    printf("\n=================================================\n");
    DoubleList_print(L1,LAST_TO_FIRST);


    return 0;
}
