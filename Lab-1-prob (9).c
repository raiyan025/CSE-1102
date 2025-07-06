#include <stdio.h>

int main()
{
    int l, b;
    printf("Enter the Length and breadth of the rectangle respectively:\n");
    scanf("%d %d", &l, &b);
    int a = l * b;
    printf("Area of the rectangle:%d", a);
    return 0;
}