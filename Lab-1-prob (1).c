#include <stdio.h>

int main()
{
    int a;

    printf("Enter the length in centimeter:", a);
    scanf("%d", &a);
    int b = a / 100;
    float c = a / 100000.0;
    printf("\nLength in meter:%d", b);
    printf("\nLength in kilometer:%.1f", c);
    return 0;
}