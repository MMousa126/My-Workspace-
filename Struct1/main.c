#include <stdio.h>
#include <stdlib.h>
#include"student.h"


int main()
{

    Student s3,s2={"Mousa",23,'C'},s1 = {"Mohamed",22,'B'};
    Student array[20]={{"mahmoud",20 ,'c'},{"ahmed",24,'a'},{"mahmdaoud",22,'c'},{"ahddfmed",25,'a'}};
    printf("%d\n",sizeof(array));

    printf("%d\n",sizeof(Student));



    //s1.father.age;
  /*  for (int i=0;s1.name[i];i++)
    {
        printf("%c",s1.name[i]);
    }*/

   // printf("%c",s1.grade);

  // s1.age = 45;

   /* passing struct by value */
 /*  for (int i ;i<4;i++)
   Student_PrintByValue(array[i]);

   array[4]=s2;
   Student_PrintByValue(array[4]);
*/

   /*for (int i ;i<4;i++)
   Student_PrintByReferance(&array[i]);
   */

   //Student_Print_Array(array,4);
  // s3 = Scan_Student();
   //Student_PrintByReferanceusarro(&s3);

   //int index = Student_findMaxAge(array,4);

   //Student_PrintByReferance(&array[index]);

   //Bubble_Sort_Struct(&array,4);

   //Student_PrintByReferanceusarro(&array);

    return 0;
}

