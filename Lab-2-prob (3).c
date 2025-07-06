#include <stdio.h>

int main()
{
    int a;
    printf("Input Number:");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is an even number", a);
    }

    else if (a % 2 == 1)
    {
        printf("%d is a odd number", a);
    }
    return 0;
}