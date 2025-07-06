#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter marks of 1st subject:", a);
    scanf("%d", &a);
    printf("Enter marks of 2nd subject:", b);
    scanf("%d", &b);
    printf("Enter marks of 3rd subject:", c);
    scanf("%d", &c);
    printf("Enter marks of 4th subject:", d);
    scanf("%d", &d);
    printf("Enter marks of 5th subject:", e);
    scanf("%d", &e);
    int total=a+b+c+d+e;
    int avg=(a+b+c+d+e)/5;
    printf("Total marks:%d\n",total);
    printf("Average marks:%d",avg);
    return 0;
}