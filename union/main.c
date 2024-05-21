#include <stdio.h>
#include <stdlib.h>
/*
typedef union {
    int c;
    struct
{
    char c1;
    char c2;
    char c3;
    char c4;
};


}UNION_T;

*/

/* the size of this union is 8 bytes */
typedef union {
    struct
{
    char c1;
    char c2;
    char c3;
    char c4;
    char c5;

};
    struct
{
    short s1;
    short s2;
    short s3;
    short s4;
};
struct
{
    int x1;
    int x2;
};
    long long onion ;

}UNION_T_T;
typedef struct
{
    char c1;
    char c2;
    char c3;
    char c4;
}struct_t;
typedef union {
    int c;
    int c2;
    char c3;
    unsigned char c4;
    char arr[4];
    struct_t s1;

}UNION_T;
int main()
{
    UNION_T U1;
    U1.c = 300;
    U1.s1.c1=300;

    printf("%d     %d      %d\n",U1.c2,U1.c3,U1.c4);


    U1.c3 = 5;
    printf("%d     %d      %d\n",U1.c2,U1.c3,U1.c4);


    U1.c3 = -1;
    printf("%d     %d      %d\n",U1.c2,U1.c3,U1.c4);


    printf("%d \n",sizeof(UNION_T));
    /*int x;
    int *p = &x;
    *p = 4;
    printf ("%d    %d\n",p,*p);

    p++;
    *p = 25;
    printf ("%d     %d\n",p,*p);*/

    return 0;
}
