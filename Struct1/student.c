
#include "student.h"

void Student_PrintByValue(Student S)
{
    printf("Name : %s  Age : %d  Grade : %c\n",S.name,S.age,S.grade);
}

void Student_PrintByReferance(Student*Ptr_s)
{
    printf("Name : %s  Age : %d  Grade : %c\n===================\n",(*Ptr_s).name,(*Ptr_s).age,(*Ptr_s).grade);

}

void Student_PrintByReferanceNoChange(const Student* Ptr_s)
{
    printf("Name : %s  Age : %d  Grade : %c\n===================\n",(*Ptr_s).name,(*Ptr_s).age,(*Ptr_s).grade);

}

void Student_PrintByReferanceusarro(Student*Ptr_s)
{
    printf("Name : %s  Age : %d  Grade : %c\n===================\n",Ptr_s->name,Ptr_s->age,Ptr_s->grade);

}

void Student_PrintByReferanceusarronochage(const Student* Ptr_s)
{
    printf("Name : %s  Age : %d  Grade : %c\n===================\n",Ptr_s->name,Ptr_s->age,Ptr_s->grade);

}

void Student_Print_Array(const Student* Ptr_s,int size)
{
    for (int i =0;i<size;i++)
    {
        //printf("%d\n",(*(Ptr_s+i)).age);
        //printf("%d\n",(Ptr_s+i)->age);
        //printf("%d\n",Ptr_s[i].age);

    printf("Name : %10s           Age : %d           Grade : %c\n",Ptr_s[i].name,Ptr_s[i].age,Ptr_s[i].grade);

    }
}


void Scan_Struct_Student_byReferance(Student *ps)
{
    printf("Enter Your Name ");
    String_Scan(&(ps->name),20);
    printf("Enter Your Age ");
    scanf("%d",&(ps->age));
    printf("Enter Your Grade ");
    scanf(" %c",&(ps->grade));

}

Student Scan_Student_Byvalue(void)
{
    Student s;
    printf("Enter Your Name ");
    String_Scan(s.name,20);
    printf("Enter Your Age ");
    scanf("%d",&(s.age));
    printf("Enter Your Grade ");
    scanf(" %c",&(s.grade));
    printf("Enter number of brothers ");
    scanf("%d",&(s.numberofbrothers));
    /* save the number of brothers and data of brothers in runtime */
    s.brothers = (Person_t*)malloc((s.numberofbrothers)*sizeof(Person_t));

    return s;

}

int Student_findMaxAge(Student *array,int size)
{
    int i,max=0,index;
    for (i=0;i<size;i++)
    {
        if ((array[i].age)>=max)
        {
            max=array[i].age;
            index = i;
        }
    }
    return index;
}
void Swap_Struct(Student*s1,Student*s2)
{
    Student temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
void Bubble_Sort_Struct(Student*arr,int size)
{
    int i,j,temp,sorted_flag = 0;
    for (i=0;i<size;i++)
    {
        sorted_flag = 1;
        for (j=0;j<size-1-i;j++)
        {
            if (arr[i].age>arr[i+1].age)
            {
                Swap_Struct(&arr[j],&arr[j+1]);
                sorted_flag=0;
            }
        }
        if (sorted_flag==1)
        {
            break;
        }
    }
}
