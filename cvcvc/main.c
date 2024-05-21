#include <stdio.h>

int main(void)
{
    int op[5]= {1,2,3,4,5};
    int op1[5]= {1,2,3,4,5};
    int size = sizeof(op)/sizeof(op1);
    int result[5]= {0};

    int *collect[]= {&op,&op1,&result};
    int **ptr =&collect;

    for (int i=0; i<size; i++)
    {
        *

    }
    return 0;
}


/*
void volume(int s,int *ptr)
{
   *ptr=s*s*s;
}
int main() {
/*
    int a[5]={100,200,300,400,500};

    int *p=a;
    //++*p;
    //*++p;
    *p++;
    printf("a[0]=%d    a[1]=%d     *p= %d\n",a[0],a[1],*p);
*//*
    float f=1.2f;
    int *ptr=(int *)&f;
    printf("float is %f\n",f);
    (*ptr)++;
    printf("float is %f\n",f);

    */

/*
int y=5;
int ptr;
volume(y,&ptr);
printf("%d",ptr);
char buff[5];
int flag =0;
printf("enter the password : ");
gets(buff);
if(strcmp(buff,"2022"))
{

printf("bad password ");
}
else{
printf("correct password");
flag = 1;
}
if (flag)
{

printf("\nyou are welcome :)");
}*/
/*}
*/
/*

int main() {

    char i,j,n;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {

        for (j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i=n;i>=0;i--)
    {

        for (j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    int arr[4][4]={0};

    for (int i=0;i<4;i++)
    {
        for(int j = 0;j<4;j++)
        {
            if ((i-j)==1 || (i-j)==-1)
            {
                arr[i][j]=1;
            }
        }
    }

    for (i=0;i<4;i++)
    {

        for (j=0;j<4;j++)
            printf("%d",arr[i][j]);
        printf("\n");
    }
    int x[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int copy[]={0};
    i=0;

    int z=100,z2=300;
    while(i<size)
        copy[i]=x[i++];

     for (i=-20;i<30;i++){
        printf("%d",copy[i]);
        printf("  ");
     }
    return 0;
}

*/
/*
#define toggle_bit(reg,bit_no) reg^=(1<<bit_no)

int main() {

    char mask;
    printf("Please Enter The number you want to toggle ");
    scanf(" %c",&mask);

    char bit = toggle_bit(mask,5);

    printf("The output is %c",bit);

    return 0;
}


*/

/*
int main() {

    int a;
    float b;

    printf("please enter the temp in fahrenheit ");
    scanf("%d",&a);

    b = (a-32)*(float)5/9;

    printf("The temp in celvene %f",b);
    return 0;
}
*/
