#include <stdio.h>

int main()
{

    float a, b;
    printf("Enter number 1:");
    scanf("%f", &a);
    printf("Enter number 2:");
    scanf("%f", &b);
    float sum = a + b, sub = a - b, multi = a * b, div = a / b;
    printf("Sum:%.2f", sum);
    printf("sub:%.2f", sub);
    printf("multi:%.2f", multi);
    printf("div:%.2f", div);
    return 0;
}