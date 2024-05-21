#include <stdio.h>
/*
char comp(char *str,char character)
{
	int i,counter=0;
	for (i=0;str[i];i++)
	{
		if (str[i]==character)
		{
			counter++;
		}
	}
	return counter;
}

int main(void)
{
	char x,i;
	char str1[] = "Hello";
	char str2[] = "This is a good day";
	char str3[] = "My name is Mohamed";
	char result[3]={0};

	char *array[]={str1,str2,str3,result};
	char **ptr = array;
	printf("Please enter char : ");
	scanf(" %c",&x);
	int res;

	ptr[3][0]=comp(ptr[0],x);

	ptr[3][1]=comp(ptr[1],x);

	ptr[3][2]=comp(ptr[2],x);


    for (i=0;i<3;i++)
    {
        printf("%d \n",ptr[3][i]);
    }

}
*/


int main ()
{

    int *ptr1=(int *)malloc(sizeof(int)*4);
    int *ptr2=(int *)malloc(sizeof(int)*4);
    int *ptr3=(int *)malloc(sizeof(int)*4);


    *ptr1=3;
    *(ptr1+1)=5;


    ptr3[0]=ptr1[0]+ptr2[0];
    ptr3[1]=ptr1[1]+ptr2[1];
    ptr3[2]=ptr1[2]+ptr2[2];
    ptr3[3]=ptr1[3]+ptr2[3];

    for (int i=0;i<4;i++)
        printf("%d\n",*(ptr3+i));

   /* int i,row,col,res;
    int RED[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    int BLUE[4][4] = {{21,22,23,24},
                      {25,26,27,28},
                      {29,30,31,32},
                      {33,34,35,36}};
    int GREEN[4][4] = {{41,42,43,44},
                       {45,46,47,48},
                       {49,50,51,52},
                       {53,54,55,56}};
    int *collect[3] = {&RED[0][0],&BLUE[0][0],&GREEN[0][0]};
    int **ptr=collect;
    printf("Red = %p\nblue = %p\ngreen = %p\n",&RED[0][0],&BLUE[0][0],&GREEN[0][0]);
    printf("ptr = %p\n",ptr);
    printf("*ptr = %p\n",*ptr);
    printf("collect = %p\n",collect);
    printf("collect address = %p\n",&collect);
    printf("*ptr = %d\n",*ptr);
    printf("*ptr+1 = %p\n",*ptr+1);
    printf("*ptr+1 = %d\n",*ptr+1);
    printf("ptr[0] = %p\n",ptr[0]);
    printf("ptr[1] = %p\n",ptr[1]);
    printf("ptr[0][0] = %d\n",ptr[0][0]);
    printf("ptr+1 = %p\n",ptr+1);
    printf("(ptr+1)+5 = %d\n",(*(ptr+1)+5));
    printf("*(ptr+1)+5 = %d\n",ptr[1][5]);

}*/
   /* printf("enter number of Row : ");
    scanf("%d",&row);
    printf("enter number of col : ");
    scanf("%d",&col);

    printf("%d,       %d,      %d",x,y,z);*/
/*

	printf("Please enter the rows : ");
	scanf("%d",&row);
	printf("Please enter the col : ");
	scanf("%d",&colume);
*/


