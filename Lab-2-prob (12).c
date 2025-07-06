#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Input the sides of the triangle\n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a > 0 && b > 0 && c > 0) && (a + b < c) && (b + c < a) && (c + a < b))
    {
        if (a == b && a == c)
        {
            printf("This is an equilateral triangle");
        }
        else if ((a == b && a != c) || (b == c && b != a) || (c == a && c != b))
        {
            printf("This is an isosceles triangle");
        }

        else if (a != b && a != c && c != b)
        {
            printf("This  is a scalene triangle");
        }
    }
    else
    {
        printf("This is not a triangle");
    }

    return 0;
}