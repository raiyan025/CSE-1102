#include <stdio.h>

int main()
{
    float f;
    printf("Enter the temperature in Fahrenheit:", f);
    scanf("%f", &f);
    float c = (f - 32) * 5 / 9;
    printf("Temperature in celsius:%.1f", c);
    return 0;
}