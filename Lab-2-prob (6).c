/*#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Input num1:", a);
    scanf("%d", &a);
    printf("Input num2:", b);
    scanf("%d", &b);
    printf("Input num3:", c);
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("Maximum:%d", a);
    }
    else if (b > a && b > c)
    {
        printf("Maximum:%d", b);
    }
    else if (c > a && c > b)
    {
        printf("Maximum:%d", c);
    }
    else
    {

        printf("There is no maximum number");
    }

    return 0;
}*/


// Nested if-else

#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Input num1:", a);
    scanf("%d", &a);
    printf("Input num2:", b);
    scanf("%d", &b);
    printf("Input num3:", c);
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("Maximum:%d", a);
        }

        else if (c > a)
        {
            printf("Maximum:%d", c);
        }
        else
        {

            printf("There is no maximum number"); // a == c and both > b
        }
    }
    else
    {
        if (b > c)
            printf("Maximum: %d", b);
        else if (c > b)
            printf("Maximum: %d", c);
        else
            printf("There is no maximum number"); // b == c and both > a
    }

    return 0;
}
