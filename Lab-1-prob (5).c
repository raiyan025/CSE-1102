#include<stdio.h>

int main()
{
int c;
printf("Enter the temperature in Celsius:",c);
scanf("%d",&c);
float f= c*9.0/5.0 + 32.0;
printf("Temperature in Fahrenheit:%.1f",f);
return 0;
}