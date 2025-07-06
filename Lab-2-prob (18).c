#include <stdio.h>

int main()
{
    int marks;

    printf("Enter Marks out of 100: ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("Grade:A+");
    }
    else if (marks >= 75 && marks <= 79)
    {
        printf("Grade:A");
    }
    else if (marks >= 70 && marks <= 74)
    {
        printf("Grade:A-");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("Grade:B+");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("Grade:B-");
    }
    else if (marks >= 40 && marks <= 49)
    {
        printf("Grade:C+");
    }
    else if (marks >= 0 && marks <= 40)
    {
        printf("Grade:F");
    }
    else
    {
        printf("ERROR.Marks greater than 100");
    }

    return 0;
}