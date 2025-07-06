#include <stdio.h>

int main()
{
    int a;
    printf("Input Number:");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d is Positive", a);
    }

    else if (a < 0)
    {
        printf("%d is Negative", a);
    }

    else
    {
        printf("The number is 0");
    }
    return 0;
}