
#include <stdio.h>
#include <stdlib.h>

#include "student.h"


int sum_array (int *arr,unsigned int size )
{
    int i,sum = 0;
    for (i=0; i<size; i++)
    {
        sum += arr[i];

    }
    return sum;

}

void array_ofchar_print (char *arr) /* why make pointer to array because i don't wanna copy all array to save memory take the address of array */
{
    unsigned int i ;
    for (i = 0; arr[i] != '\0' /* can right arr[i]*/; i++)
        printf("%d  ",arr[i]); /* you can write that arr[i] or this *(arr+i)*/

    printf("\n");
}



void array_print (int *arr,unsigned int size ) /* why make pointer to array because i don't wanna copy all array to save memory take the address of array */
{
    unsigned int i ;
    for (i = 0; i<size; i++)
        printf("%d  ",arr[i]); /* you can write that arr[i] or this *(arr+i)*/

}

int Search_array (int *arr,unsigned int size,int search,int *ptrindex)  /* why make pointer to array because i don't wanna copy all array to save memory take the address of array */
{
    int i,index = -1,counter = 0;
    for (i=0; i<size; i++)
    {
        if (search == arr[i])
        {
            index = i;
            counter++;
        }


    }
    *ptrindex = index; /* to return two things */
    return counter;
}

int Search_array_f_l (int *arr,unsigned int size,int search,int *ptrindex_f,int *ptrindex_last)  /* why make pointer to array because i don't wanna copy all array to save memory take the address of array */
{
    int i,index = -1,counter = 0;
    for (i=0; i<size; i++)
    {
        if (search == arr[i])
        {
            ptrindex_last = i;
            counter++;
            if (counter==1)
                ptrindex_f =i;
        }


    }
    return counter;
}

int array_scan (int *arr,int MaxSize)
{
    int i,size;
    printf("Enter the array total numbers not more than MaxSize %d  ",MaxSize);
    scanf("%d",&size);
    for (i=0; i<size && i<MaxSize; i++)
    {
        scanf("%d",&arr[i]);
    }

    return i;

}

void array_reverse (int *arr, int size )
{
    int temp,i,j = size -1;
    for (i = 0; i<=j; i++)
    {
        temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }
}

/* there is an interview question about testing here*/
void swap_two_arrays (int *arr1,int size1,int *arr2,int size2)
{
    int temp,i;
    int size = size1; // if size 1 is smaller
    if (size2<size1)  // if size 2 is smaller
        size = size2;
    for(i=0; i<size; i++) // swapping on smaller size
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;

    }
}


void Reverse_Swap_two_arrays (int *arr1,int size1,int *arr2,int size2)
{
    int i,temp,j = size1 -1;

    if (size1==size2)
    {
        for (i=0; i<size1; i++)
        {
            temp = arr1[j];
            arr1[j] = arr2[i];
            arr2[i] = temp;
            j--;
        }
    }

}

int Prime_Number(int Number)
{
    int i,flag=1;
    if (Number<2)
        return 0;
    for (i = 2; i<Number; i++)
    {
        if (Number%i == 0)
            flag = 0;

    }
    return flag;
}

void array_removeprime (int *arr,int size)
{
    int i ;
    for (i=0; i<size; i++)
    {
        if(Prime_Number(arr[i]))
            arr[i] = 0;
    }
}

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

int string_lenth (char *str)
{
    int i;
    for (i=0; str[i]; i++);
    return i;
}

void string_capitaltosmall(char*string )
{
    int i;
    for (i =0; string[i]; i++)
    {
        if (string[i] >='A' && string[i]<='Z')
        {
            string[i] = string[i] - 'A' + 'a';
        }
    }
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

    /*
            for (i=0; string1[i] || string2[i]; i++) // why || because i want to check longer on
            {
                if (string1[i] == string2[i])
                    return 1;
                else
                    return 0;
            }*/

}

int string_compare_Notcasesincetive(char *string1,char *string2)
{
    string_capitaltosmall(string1);
    string_capitaltosmall(string2);
    return string_compare(string1,string2);


}

int string_compare_Notcasesincetive2(char *string1,char *string2)
{

}

void String_Scan(char *string,int MaxSize)
{
    int i = 0;

    scanf(" %c",&string[i]);

    for (; string[i] != '\n' && i<MaxSize-1;)/* why MaxSize-1 because i have to take care of null */
    {
        i++;
        scanf("%c",&string[i]);

    }
    string[i]=0;
}

void String_longestWord(char *string,char *Word)
{
    int i,counter =0,max=0,index=0,j=0;

    for (i=0; string[i]; i++)
    {
        if (string[i] == ' ')
        {
            if (counter >= max )
            {
                max = counter;
                index=i-1;

            }
            counter=0;

        }
        else
        {
            counter++;
        }
    }
    /* that is for if the last word was the longest one */
    if (counter >= max )
    {
        max = counter;
        index=i-1;

    }

    /* for printing the longest word */

    i=index-max+1;
    for (; j<max;)
    {
        Word[j]=string[i];
        i++;
        j++;
    }

    Word[j]=0;

}

void String_Reverce (char *string)
{
    int lenght = string_lenth(string);
    int i,j = lenght-1;
    for (i=0; i<=j; i++,j--)
    {
        char temp = string[i];
        string[i]=string[j];
        string[j]=temp;
    }
}

void String_SubReverce (char *string,int first,int last)
{
    int i =first,j =last;
    for (; i<=j; i++,j--)
    {
        char temp = string[i];
        string[i]=string[j];
        string[j]=temp;
    }
}

/* function convert from integer to string */
void IntegertoString(int number,char *string)
{
    int reminder,i=0,flag = 0;

    if (number==0)
    {
        string[0]= '0';
        string[1]= '0';
        return;
    }
    if (number<0)
    {
        number= -number;
        flag = 1;

    }
    while(number)
    {
        reminder=number%10;
        reminder=reminder+'0';
        string[i]=reminder;
        i++;
        number=number/10;

    }
    if (flag == 1 )
    {
        string[i] = '-';
    }
    string[i+1]=0;
    String_Reverce(string);
}

int StringtoInteger (char *string)
{
    int i,number=0,flag=0;
    if (string[0]== '-')
        flag=1;


    for (i=0; string[i]; i++)
    {
        if (string[i]>= '0' && string[i] <= '9')
        {
            number =number*10 +(string[i] - '0');
        }
    }
    if (flag == 1)
        number=-number;
    return number;
}

int StringtoInteger2 (char *string,int *ptnumber)
{
    int i=0,number=0,flag=0;
    if (string[0]== '-')
    {
        flag=1;
        i++;

    }
    for (; string[i]; i++)
    {
        if (string[i]>= '0' && string[i] <= '9')
        {
            number =number*10 +(string[i] - '0');
        }
        else
            return 0;
    }
    if (flag == 1)
        number=-number;
    *ptnumber = number;/* and pointer return the number that is stander */

    return 1; /* return says that the function is failed or succeed that is stander to ask with if  */
}
void swap_pointers(int **p,int **p2)
{
    int *temp = *p;
    *p = *p2;
    *p2 = temp;
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
}
