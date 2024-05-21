#include <stdio.h>

static int evaluateMathExpression(const char *equation)
{
    // Initialize variables
    int result = 0;
    char operator = '+';
    int operand;

    // Iterate through each character in the equation
    while (*equation)
    {
        // Check if the current character is a digit
        if (*equation >= '0' && *equation <= '9')
        {
            operand = 0;

            // Extract the operand from the string
            while (*equation >= '0' && *equation <= '9')
            {
                operand = operand * 10 + (*equation - '0');
                equation++;
            }

            // Apply the operand based on the current operator
            switch (operator)
            {
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
        }
        else if (*equation == '+' || *equation == '-' || *equation == '*' || *equation == '/')
        {
            // Set the current character as the operator
            operator = *equation;
        }

        // Move to the next character in the equation
        equation++;
    }

    return result;
}
int string (char *str)
{
    char i=0, flag =0,op=0,res=0,num=0;


    while(str[i])
    {
        if (str[i]=='(')
        {
            i++;
            flag =1;
        }
        // what in the brackets
        if (flag ==1)
        {
            if (str[i]>='0'&&str[i]<='9')
            {
                while(str[i]>='0'&&str[i]<='9')
                {
                    num = num *10+(str[i]-'0');
                    i++;
                }
                switch(op)
                {
                case '+' :
                    res += num;
                    break;
                case '-' :
                    res -= num;
                    break;
                case '/' :
                    res /= num;
                    break;
                case '*' :
                    res *= num;
                    break;
                }

            }
            else if (str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
            {
                op = str[i];
            }

        }

    }

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

/*
int main()
{
    const char *equation = "2 * (3 + 4)";
    int result = evaluateMathExpression(equation);

    printf("Result of the expression \"%s\" is: %d\n", equation, result);

    return 0;
}
*/
