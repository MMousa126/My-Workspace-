#include <stdio.h>
#include <stdlib.h>

void Star_Set(int arr[][30],int row,int colume,int coordinateofstar_x,int coordinateofstar_y)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for (j=0; j<colume; j++)
        {
            if((i>coordinateofstar_x)&&(j==coordinateofstar_y))
            {
                arr[i][j] = '^';
            }
            else if((i<coordinateofstar_x)&&(j==coordinateofstar_y))
            {
                arr[i][j] = 'v';
            }
            else if((i==coordinateofstar_x)&&(j<coordinateofstar_y))
            {
                arr[i][j] = '>';
            }
            else if((i==coordinateofstar_x)&&(j>coordinateofstar_y))
            {
                arr[i][j] = '<';
            }
            /************************************************************************/
            else if((i>coordinateofstar_x)&&(j>coordinateofstar_y))
            {
                arr[i][j] = '\\';
            }
            else if((i<coordinateofstar_x)&&(j<coordinateofstar_y))
            {
                arr[i][j] = '%';
            }
            else if((i>coordinateofstar_x)&&(j<coordinateofstar_y))
            {
                arr[i][j] = '/';
            }
            else if((i<coordinateofstar_x)&&(j>coordinateofstar_y))
            {
                arr[i][j] = '&';
            }
            else
            {
                arr[i][j] = '0';
            }
        }
    }
    arr[coordinateofstar_x][coordinateofstar_y] = '*';
}

void Star_Print(int arr[][30],int row,int colume)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for (j=0; j<colume; j++)
        {
            printf("%3c",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n====================================\n");
}

void Star_Find(int arr[][30],int row,int colume,int*coord_x,int*coord_y)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for (j=0; j<colume; j++)
        {
            if (arr[i][j]=='*')
            {
                *coord_x = i;
                *coord_y = j;
                return;
            }
        }
        printf("\n");
    }
}
/* pointer to array */
int main()
{
    char array[30][30];
    int x,y;
    while(1)
    {
        printf("Enter the x and y coordinates : ");
        scanf("%d%d",&x,&y);

        Star_Set(array,10,10,x,y);
        Star_Print(array,10,10);

        Star_Find(array,10,10,&x,&y);

        printf("%d        %d \n",x,y);
    }



    return 0;
}



