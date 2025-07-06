#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Input the angles of the triangle\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b + c == 180 && a > 0 && b > 0 && c > 0)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is not valid");
    }
    return 0;
}