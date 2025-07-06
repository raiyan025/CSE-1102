#include <stdio.h>

int main()
{
    int l, b;
    printf("Enter the Length and breadth of the rectangle respectively:\n");
    scanf("%d %d", &l, &b);
    int p = 2 * (l + b);
    printf("Perimeter of the rectangle:%d", p);
    return 0;
}