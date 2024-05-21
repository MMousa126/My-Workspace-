#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int grade;
    printf("Enter Your Grade :  ");
    scanf("%d",&grade);
	
	if (grade > 100)
		printf("wrong grade ");
    else if (grade >=90)
        printf("A+");
    else if (grade >=80)
        printf("B");
    else if (grade >=70)
        printf("C+");
    else if (grade >=60)
        printf("C");
    else if (grade >=50)
        printf("D");
    else if (grade >=0)
            printf("F");
    else if (grade < 0)
        printf("wrong grade ");
    return 0;
}
