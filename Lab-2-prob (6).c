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
}