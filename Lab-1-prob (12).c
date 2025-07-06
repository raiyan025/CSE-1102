#include <stdio.h>

int main()
{
    float h, b;
    printf("Enter the base and height of the triangle respectively:\n");
    scanf("%f %f", &b, &h);
    float a = 0.5 * b * h;
    printf("The Area of the triangle is:%.2f", a);
    return 0;
}