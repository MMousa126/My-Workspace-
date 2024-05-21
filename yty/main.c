#include <stdio.h>
#include <stdlib.h>

/*
Write c function to reverse words in sentence (without using external arrays)
" I work as an embedded software engineer for 3 years"
-> " years 3 for engineer software embedded an as work I"
*/
int String_Length(char*str,int size)
{
    int i;
    for (i=0; str[i]; i++);
    return i;

}

void Reverse_Word(char*start,char*end)
{
    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

}
void Reverse_Words (char*str,int size)
{
    int i,j,temp,counter = 0;
    char end = 0;
    char start = 0;
    int length = String_Length(str,size) - 1;
    for (i=0; i<=length; i++)
    {
        temp = str[i];
        str[i] = str[length];
        str[length] = temp;
        length--;
    }


    for (i=0;str[i];i++)
    {
        if (str[i] == ' ')
        {
            end = i-1;
            Reverse_Word(&str[start],&str[end]);
            start = i+1;
        }
    }

    /* this for the last word because there is no space after the last word */
    Reverse_Word(&str[start], &str[i-1]);
}

int evaluateMathExpression(const char *equation) {
    // Initialize variables
    int result = 0;
    char operator = '+';
    int operand;

    // Iterate through each character in the equation
    while (*equation) {
        // Check if the current character is a digit
        if (*equation >= '0' && *equation <= '9') {
            operand = 0;

            // Extract the operand from the string
            while (*equation >= '0' && *equation <= '9') {
                operand = operand * 10 + (*equation - '0');
                equation++;
            }

            // Apply the operand based on the current operator
            switch (operator) {
                case '+':
                    result += operand;
                    break;
                case '-':
                    result -= operand;
                    break;
                case '*':
                    result *= operand;
                    break;
                case '/':
                    result /= operand;
                    break;
            }
        } else if (*equation == '+' || *equation == '-' || *equation == '*' || *equation == '/') {
            // Set the current character as the operator
            operator = *equation;
        }

        // Move to the next character in the equation
        equation++;
    }

    return result;
}


char* superReducedString(char* s) {

    int size = strlen(s);
    static char newstr[]={0};
    int i=0;
        while (s[i] != '\0') {
        if (s[i] == s[i + 1]) {
            // If adjacent characters match, remove them
            int j = i;
            while (s[j] != '\0') {
                s[j] = s[j + 2];  // Shift characters to the left
                ++j;
            }
            i = 0;  // Start over after the removal
        } else {
            ++i;  // Move to the next character
        }
    }

    for (i=0;s[i];i++)
    {
        newstr[i]=s[i];
        printf("%d",newstr[i]);
    }
    if (newstr[0]=='\0')
    {
        return "Empty String";
    }
    else {
    return newstr;
    }

}

int main()
{
    int arr[]={10,20,30,40,50};
    int *ptr=arr;
    *(ptr++)+=123;
    printf("%d   %d \n",*ptr,*(ptr+1));
    unsigned int u=0;
    printf("%u",~u);
    char string[] ="Iwork as an embedded software engineer for 3 years" ;

    char size = sizeof(string)/sizeof(string[0]);
    for(int i = 0; i<size; i++)
    {
        printf("%c",string[i]);
    }


    printf("\n================================\n");

    Reverse_Words(string,size);

    for(int i = 0; i<size; i++)
    {
        printf("%c",string[i]);
    }

    char x =130;
    printf("//////////////////////////////////////////\n");
    printf(" %d ",x);
    printf("%x\n",-2>>1<<2);
/*
    int arr[] = {12,15};
    printf("%d ",sizeof(*arr+1));
    char str[] = "mousa";
    str[0]= 'c';
    printf("%s",str);
    str="kanpur";
    printf("%s",str+1);*/


    return 0;
}


