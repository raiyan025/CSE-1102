#include <stdio.h>

int main()
{

    int a, b;
    printf("Input num1:", a);
    scanf("%d", &a);
    printf("Input num2:", b);
    scanf("%d", &b);
    if (a > b)
    {
        printf("Maximum:%d", a);
    }
    else
    {

        printf("Maximum:%d", b);
    }

    return 0;
}