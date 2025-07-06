#include<stdio.h>
#include<math.h>//to use pow()
int main()
{
double s;
printf("Enter side of the equilateral triangle:");
scanf("%lf",&s);
double a=pow(3, 0.5)/4 *s*s;//sqrt()also can be used,0.5 dite hobe 1/2 hobe na
printf("The area of the triangle is:%.2lf",a);
return 0;
}