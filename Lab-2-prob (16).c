/*#include <stdio.h>

int main()
{
    int month;

    printf("Enter Month Number (1-12): ");
    scanf("%d", &month);

    if (month == 1)
        printf("January");
    else if (month == 2)
        printf("February");
    else if (month == 3)
        printf("March");
    else if (month == 4)
        printf("April");
    else if (month == 5)
        printf("May");
    else if (month == 6)
        printf("June");
    else if (month == 7)
        printf("July");
    else if (month == 8)
        printf("August");
    else if (month == 9)
        printf("September");
    else if (month == 10)
        printf("October");
    else if (month == 11)
        printf("November");
    else if (month == 12)
        printf("December");
    else
        printf("Invalid month number!");

    return 0;
}*/

// using switch case

#include <stdio.h>

int main()
{
    int month;
    printf("Enter Month Number (1-12): ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("Invalid month number!");
    }

    return 0;
}
