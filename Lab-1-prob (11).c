#include<stdio.h>

int main()
{
float a,b;
printf("Enter the A and B angle of the triangle respectively:\n");
scanf("%f %f",&a,&b);
float c=180-(a+b);
printf("The third angle C is:%.2f",c);
return 0;
}