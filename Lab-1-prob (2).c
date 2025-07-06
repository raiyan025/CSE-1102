#include<stdio.h>

int main(){

    int radius;
    float PI=3.146;
    printf("Enter the radius:",radius);
    scanf("%d",&radius);
    int diameter = radius * 2;
    float circumference = 2*PI*radius;
    float area = PI*radius*radius;
    printf("\nDiameter of the circle:%d\n",diameter);
    printf("Circumference of the circle:%2.2f\n",circumference);
    printf("Area of the circle:%2.2f",area);
    return 0;
}