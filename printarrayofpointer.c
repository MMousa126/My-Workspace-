void arrayofpointers_print(char**array,int size)
{
    int i,j;
    for (i=0;i<size;i++)
    {
        for (j=0;array[i][j];j++){
            printf("%c",array[i][j]);
    }
        printf("\n");
    }
}

int main ()
{
    /*int x=500000000,arr[100], y=700000000;
    int *p= &x  ,*p2 = &y;

    swap_pointers(&p,&p2);
    printf("p = %d     p2 = %d",*p,*p2);*/
    char *arr[5] = {"Mohamed", "Abd-Elhamid" ,"Ebrahim","Ahmed","Mousa"};

    /* i want to print - in abd-elhamid */

    /*printf("%c",*(*(arr+1)+3));
    printf("%c",arr[1][3]);*/
    arrayofpointers_print(arr,5);

    return 0;
}

 #include<stdio.h>

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
    for (i=0;i<size;i++)
    {
        for (j=0;array[i][j];j++){
            printf("%c",array[i][j]);
    }
        printf("\n");
    }
}

int main ()
{
    /*int x=500000000,arr[100], y=700000000;
    int *p= &x  ,*p2 = &y;

    swap_pointers(&p,&p2);
    printf("p = %d     p2 = %d",*p,*p2);*/
    char *arr[5] = {"Mohamed", "Abd-Elhamid" ,"Ebrahim","Ahmed","Mousa"};

    /* i want to print - in abd-elhamid */

    /*printf("%c",*(*(arr+1)+3));
    printf("%c",arr[1][3]);*/
    arrayofpointers_print(arr,5);

    /*int *temp = arr[2];
    arr[2] = arr[3];
    arr[3] = temp;*/

    swap_pointers(&arr[2],&arr[3]);

    printf("==========================================\n");
    arrayofpointers_print(arr,5);


    return 0;
}

