#include<stdio.h>
void String_print (char *str)
{
    unsigned int i ;

    if(str ==0 )
    {
        return;
    }
    else
    {
        for (i = 0; str[i]; i++)
            printf("%c",str[i]);

        printf("\n");
        //  printf("in function size of %d\n",sizeof(str)); /* printed the size of pointer */
        //  printf("in function the size of string %d \n",string_lenth(str));

    }

}
//swapping tow pointers

void swap_pointers(int **p,int **p2)
{
    int *temp = *p;
    *p = *p2;
    *p2 = temp;
}

void arrayofpointers_print(char**array,int size)
{
    int i,j;
    for (i=0; i<size; i++)
    {
        String_print(array[i]);
    }
    printf("\n");

}

int main ()
{
    /* Modify array of pointers */

    char name1[] = "Mousa";
    char name2[] = "Mohamed";
    char name3[] = "Ahmed";
    char name4[] = "nada";
    char name5[] = "sofian";
    char name6[] = "lamila";

    char *arr[5] = {name1,name2,name3,name4,name5};

    arr[3][2] = 'M';
    arrayofpointers_print(arr,5);

    printf("==========================================\n");

    arrayofpointers_print(arr,5);


    return 0;
}

