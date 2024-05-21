#include <stdio.h>
#include <stdlib.h>
/**************************************** EXAM 1 *******************************************/

int last (int *arr,int size,int search )
{
    int i, index = -1;

    for(i =0; i<size ; i++)
    {
        if (arr[i]== search)
        {
            index = i;
        }

    }
    return index;
}

typedef unsigned char u8;

int count_zeros(u8 num)
{
    u8 i,flag =0,max =0,count=0 ;

    for (i=0; i<8; i++)
    {
        if (((num>>i)&1) == 1)
        {
            if (count>max)
            {
                max=count;
            }
            count=0;
            flag =1;
        }
        else
        {
            // this condition solve if there is zero at first
            if (flag == 1)// the last step there was one
            {
                count++;
            }
        }
    }
    return max;

}



int count_zeros2(u8 n)
{
    u8 i,j,c=0,max = 0;

    for (i=0; i<8; i++)
    {
        if ((n>>i)&1)
        {
            for (j=i+1; j<8; j++)
            {
                if ((n>>j)&1)
                {
                    if (c>max)
                    {
                        max =c;
                    }
                    c=0;
                    break;
                }
                else
                {
                    c++;
                }
            }

        }

    }
    return max;
}

int even_odd(int num)
{
    if (num % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int *ispowerof2(int size,int *arr,int *res)
{
    static int array[]= {0};
    int i,sum = 0;
    for (i=0; i<size; i++)
    {
        sum =0;
        while(arr[i])
        {
            sum = sum + arr[i]&1;
            arr[i]=arr[i]>>1;
        }
        if (sum == 1)
        {
            array[i]=1;
        }
        else
        {
            array[i]=0;
        }
    }
    return array;
}

/********************************************************************************************************/

int find_longestconsecutiveoccurence (int *arr,int size,int num)
{
    int i,max = 0, counter=0;

    for (i=0; i<size; i++)
    {
        if (num==arr[i])
        {
            counter++;
            if (counter>max)
            {
                max=counter;
            }
        }
        else
        {
            counter=0;
        }

    }
    return max;

}

int *print_reverse (int lower,int upper,int*size)
{

    int i,j=0;
    static int arr[]= {0};
    int size_func= (upper-lower) - 1;

    if (lower>=upper || upper-1 == lower )
    {
        arr[0]=0xff;
        arr[1]=0xff;
        size_func = 2;
    }
    else
    {

        for (i=upper - 1 ; i> lower; i--)
        {
            arr[j]=i;
            j++;
        }

    }


    *size = size_func;

    return arr;

}

int ispowerof3(int num)
{
    if (num == 1 || num == 0 ) // one and zero not power of 3
    {
        return 1;
    }

    while (num)
    {
        if (num%3 == 0)
        {
            if (num == 3)
            {
                return 0;
            }
            num = num/3;
        }
        else
        {
            return 1;
        }
    }
}
int power_of3(int num)
{
    int i;

    if (num == 1 || num == 0 ) // one and zero not power of 3
    {
        return 1;
    }
    for (i=1; i<=num; i=i*3)
    {
        if (num == i)
        {
            return 0;
        }
    }
    return 0;
}

int fourthbit(int num)
{

    return ((num>>3)&1);

}
int count_ones(int num)
{
    int c = 0;
    for (int i=0; i<32; i++)
    {
        if ((num>>i)&1)
        {
            c++;
        }
    }

    return c;

}

int count_zerosbetweentwoones(int num)
{
    int i,max = 0,counter =0,ones_flag = 0;

    for (i=0; i<32; i++)
    {
        if ((num>>i)&1)
        {
            if (counter > max)
            {
                max = counter;
            }
            counter = 0;
            ones_flag =1;
        }
        else
        {
            if (ones_flag == 1)
            {
                counter++;
            }
        }
    }
    return max;
}

int fallingedgecounter (u8 pinreading )
{
    static u8 fallingcount = 0;
    static u8 previous = 0; // to make sure that the previous signal was one

    if ((pinreading == 0) && (previous == 1))
    {
        fallingcount++;
    }

    previous = pinreading;
    return fallingcount;
}

int risingedgecounter_sinceitcalles(u8 pinreading )
{
    static u8 flag = 0;
    static u8 previous = 0;
    static u8 countrising =0;


    if (flag == 0)
    {
        if (pinreading == 1)
        {
            countrising = 0;
        }
        flag = 1;
        return countrising;
    }

    if (pinreading == 1 && previous == 0 )
    {
        countrising++;
    }
    previous = pinreading;
    return countrising;

}

u8 rightshiftcircular (int inputnum,int numofshifts,int*out)
{

    if (numofshifts > 32)
    {
        *out = inputnum;
        return 0xff;
    }

    else
    {
        *out = ((inputnum>>numofshifts)|(inputnum<<(8*sizeof(inputnum) - numofshifts)));
        return 0;
    }
}
int maximum_XOR(int a,int b)
{
    int i,j;

    int temp = 0, max_xor = 0;

    for (i=a; i<=b; i++)
    {
        for (j=i; j<=b; j++)
        {
            temp = i^j;
            if (temp > max_xor)
            {
                max_xor = temp;
            }
        }
    }

    return max_xor;

}

int closedpaths(int num)
{
    int j=0,digit,max = 0;

    while(num)
    {
        digit = num%10;

        if (digit == 0||digit == 4||digit == 6||digit == 9)
        {
            max = max + 1;
        }
        else if (digit == 8)
        {
            max =max + 2;
        }
        else
        {
            max = max + 0;
        }
        num= num/10;
    }
    return max ;

}
int maximum_XOR2(int a,int b)
{
    int i,j,max = 0,xor=0;

    for (i=a; i<=b; i++)
    {
        for (j=i; j<=b; j++)
        {
            xor = i^j;
            if (xor > max )
            {
                max = xor ;
            }
        }
    }
    return max;
}

unsigned int u8calculateheatingtime(unsigned int u8watertemp)
{
    int result =0;

    if (u8watertemp >= 0 && u8watertemp <= 30)
    {
        result = 7;
    }
    else if (u8watertemp > 30 && u8watertemp <= 60)
    {
        result = 5;
    }
    else if (u8watertemp > 60 && u8watertemp <= 90)
    {
        result = 3;
    }
    else if (u8watertemp > 90)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
    return result;
}
int countlastocc(int *arr,int size,int num)
{
    int i,counter = 0,max = 0;
    for (i=0; i<size; i++)
    {
        if (arr[i]==num)
        {
            counter++;
            if (counter > max)
            {
                max = counter;
            }
        }
        else
        {
            counter = 0;
        }
    }
    return max;
}

int last_occ (int *arr,int size,int find)
{
    int i,index,flag = 0,occ = 0;

    for (i=0; i<size; i++)
    {
        if (arr[i] == find)
        {
            occ = 1;
            for(int j =size-1; j > i; j--)
            {
                if (arr[i] == arr[j])
                {
                    index = j;
                    flag = 1;
                }
            }

            if (flag == 0)
            {
                index = i;
            }
        }
    }
    if (occ == 0 )
    {
        return 0;
    }
    return index;
}

int last_occ2 (int *arr,int size,int find)
{
    int i,index = -1;

    for (i=0; i<size; i++)
    {
        if (arr[i]==find )
        {
            index = i;
        }
    }
    return index;
}

int rising(int trigger)
{
    static int previous =-1;
    static int edgecount = 0;

    if (previous == -1)
    {
        previous = trigger;
        return 0;
    }

    if (previous == 0 && trigger == 1)
    {
        edgecount++;
    }
    previous = trigger;

    return edgecount;

}
int rising2(int trigger )
{
    static int prev =0;
    static int flag =0;
    static int count = 0;

    if (flag == 0)
    {
        if (trigger == 1)
        {
            count = 0;
        }
        flag =1;
        return 0;
    }
    if (prev == 0 && trigger == 1)
    {
        count++;
    }
    prev = trigger;
    return count;
}

char string_length(char*str)
{
    int i;
    for (i=0; str[i]; i++);
    return i;
}
void string_reverce (char *str )
{
    char length = string_length(str);
    char i,j=length-1;

    for (i=0; i<=j; i++)
    {
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }
}

unsigned int clear(unsigned int num,unsigned int bitnum)
{
    if (bitnum>=(sizeof(num)*8))
    {
        return num;
    }
    else
    {
        return (num&(~(1<<bitnum)));
    }
}

void array_reverce(int*arr,int size)
{
    int i,j=size-1;
    for (i=0; i<=j; i++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
}
void selection_sort(int *arr,int size)
{
    int max = 0,j,i,max_index = 0,last = size-1,temp;
    for (j=0; j<size; j++)
    {
        max_index=0;
        for (i=0; i<=last; i++)
        {
            if (arr[i]> arr[max_index])
            {
                max_index=i;
            }
        }
        temp = arr[max_index];
        arr[max_index]=arr[last];
        arr[last]=temp;
        last--;
    }


}

char length(char *str)
{
    int i;
    for (i=0;str[i];i++);
    return i;
}
int main()
{

    int z=10,y=15;

    z=z+y-(y=z);
    printf("%d  %d \n",z,y);
    z=10;
    if (z>10)
        z-=10;
        else if (z>=0)
            z+=00;
        else if (z)
            z+=10;
        else
            z-=10;

        printf("%d \n",z);
    char str[]="mohamed";
    char result = string_length(str);
    printf("%d   \n",result);

    string_reverce(str);

    printf("%s \n",str);

    char len=length(str);

    printf("%d \n",len);



    int arr[]= {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x =197;
    printf("\n*****************************************\n");
    array_reverce(arr,size);
    for (u8 i =0; i<size; i++)
    {
        printf("%d    ",arr[i]);
    }
    printf("\n*****************************************\n");
    int occ[] = {1,2,3,4,5,6,4};

    int size2 = sizeof(occ)/sizeof(occ[0]);

    printf("\n\n %d \n\n",last_occ(occ,size2,10));
    printf("***  %d **\n",countlastocc(arr,size,4));

    int *array = ispowerof2(size,arr,size);

    int r = closedpaths(649578);

    printf("***** %d ******\n",r);

    for (u8 i =0; i<size; i++)
    {
        printf("%d    ",array[i]);
    }

    printf("\n");

    int s;

    int *ptr =  print_reverse(2,5,&s);

    printf("%d  \n",s);
    for (u8 i =0; i<s; i++)
    {
        printf("%d    ",ptr[i]);
    }

    printf("\n");

    int res;
    /*
    res = last(arr,size,7);

    res =count_zeros2(x);*/

    res = find_longestconsecutiveoccurence(arr,size,4);

    if (ispowerof3 (5) == 0)
    {
        printf("is Power of 3 \n");
    }
    else
    {
        printf("is not power of 3 \n");
    }



    printf("%d    \n",fourthbit(23));

    printf("%d ",res);
    return 0;
}
