// Using switch
#include <stdio.h>

int main()
{

    float num1, num2;
    char op;
    printf("Choose an option(+ - * /):\n");
    scanf("%c", &op);

    printf("Enter Two Numbers:\n");
    scanf("%f %f", &num1, &num2);

    switch (op)
    {
    case '+':
        printf("Summation of %.2f and %.2f is:%.2f", num1, num2, num1 + num2);
        break;
    case '-':
        printf("Subtration of %.2f and %.2f is:%.2f", num1, num2, num1 - num2);
        break;
    case '*':
        printf("multiplication of %.2f and %.2f is:%.2f", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("Division of %.2f and %.2f is:%.2f", num1, num2, num1 / num2);
        }
        else
        {
            printf("Division is not possible");
        }
        break;
    default:
        printf("ERROR 404");
        break;
    }

    return 0;
}

// Using if else
/*#include<stdio.h>
int main()
{float num1, num2;
    char op;
    printf("Choose an option(+ - * /):\n");
    scanf("%c", &op);

    printf("Enter Two Numbers:\n");
    scanf("%f %f", &num1, &num2);

    if (op=='+')
    {
        printf("Summation of %.2f and %.2f is:%.2f", num1, num2, num1 + num2);
    }
    else if (op=='-')
    {
        printf("Subtraction of %.2f and %.2f is:%.2f", num1, num2, num1 - num2);
    }

    else if(op=='*')
    {
        printf("multiplication of %.2f and %.2f is:%.2f", num1, num2, num1 * num2);
    }

    else if (op=='/')
    {if (num2!=0)
    {
        printf("Division of %.2f and %.2f is:%.2f", num1, num2, num1 / num2);
    }
    else
    {
        printf("Division is not possible");
    }


    }
    else
    {
        printf("ERROR 404");
    }
    return 0;
}*/
