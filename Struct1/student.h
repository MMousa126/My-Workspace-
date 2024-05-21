
#ifndef STUDENT_H_
#define STUDENT_H_
/* struct for any person */
typedef struct
{
    char name[20];
    int phone[11];
    int age;
}Person_t;

typedef struct
{
    char name[20];
    int age ;
    char grade;
    Person_t father;
    Person_t mother;
    int numberofbrothers;
    /* i want to save memory so i want to no the numbers of brothers in runtime malloc */
    /* pointer 8 byte instead of array of brothers every one brothers is size of person_t */
    Person_t *brothers;
    struct student *s;

}Student ;


void Student_PrintByValue(Student S);

void Student_PrintByReferance(Student* Ptr_s);

/* don't want to modify the struct */
void Student_PrintByReferanceNoChange(const Student* Ptr_s);

void Student_PrintByReferanceusarro(Student*Ptr_s);

void Student_PrintByReferanceusarronochage(const Student* Ptr_s);


void Student_Print_Array(const Student* Ptr_s,int size);

void Scan_Struct_Student_byReferance(Student *ps);

Student Scan_Student(void);

int Student_findMaxAge(Student *array,int size);

void Swap_Struct(Student*s1,Student*s2);

void Bubble_Sort_Struct(Student*arr,int size);



#endif // STUDENT_H_
