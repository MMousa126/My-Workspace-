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

int string_lenth (char *str)
{
    int i;
    for (i=0; str[i]; i++);
    return i;
}

int string_compare(char *string1,char *string2)
{
    int i ;

    if (string_lenth(string1) == string_lenth(string2))
    {
        for (i=0; string1[i]&& string2[i]; i++)
        {
            if (string1[i] == string2[i])
                return 1;
            else
                return 0;
        }
    }
    else
        return 0 ;
}


int Search_array_Pointer(char**arr,int size,char* search)
{
    int i,index = -1,counter = 0;
    for (i=0; i<size; i++)
    {
        if (string_compare(arr[i],search))
        {
            return i;
        }
    }
    return -1;
}
int string_compare2(char *string1,char *string2)
{
    int i ;
        for (i=0; string1[i]  || string2[i]; i++)
        {
            if (string1[i] > string2[i])
                return 1;
            else if (string1[i] < string2[i])
                return -1;
        }
        return 0 ;
}
/*
void Bubble_Sort(char**arr,int size)
{
    int i,j,temp,sorted_flag = 0;
    for (i=0;i<size;i++)
    {
        sorted_flag = 1;
        for (j=0;j<size-1-i;j++)
        {
            if (string_compare2(arr[j],arr[j+1])==1)
            {
                swap_pointers(arr[j],arr[j+1]);
                sorted_flag=0;
            }
        }
        if (sorted_flag==1)
        {
            break;
        }
    }
}*/


int main ()
{
    /* Modify array of pointers */

    char name1[] = "Mousa";
    char name2[] = "Mohamed";
    char name3[] = "ahmed";
    char name4[] = "nada";
    char name5[] = "sofian";
    char name6[] = "lamila";

    char *arr[5] = {name1,name2,name3,name4,name5};


    arrayofpointers_print(arr,5);

    Bubble_Sort(arr,5);

    arrayofpointers_print(arr,5);



    return 0;
}

