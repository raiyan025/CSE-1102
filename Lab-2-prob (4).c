#include <stdio.h>

int main()
{
    char a;
    printf("Input character:");
    scanf("%c", &a);
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
    {
        printf("%c is alphabet", a);
    }

    else if (a >= '0' && a <= '9')
    {
        printf("%c is a Number", a);
    }

    else
    {
        printf("The input is a special character");
    }
    return 0;
}