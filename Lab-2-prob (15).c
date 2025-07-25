/*#include <stdio.h>

int main()
{
    int day;

    printf("Enter day number (1 to 7):");
    scanf("%d", &day);

    if (day == 1)
        printf("Saturday\n");
    else if (day == 2)
        printf("Sunday\n");
    else if (day == 3)
        printf("Monday\n");
    else if (day == 4)
        printf("Tuesday\n");
    else if (day == 5)
        printf("Wednesday\n");
    else if (day == 6)
        printf("Thursday\n");
    else if (day == 7)
        printf("Friday\n");
    else
        printf("Invalid input. Please enter a number between 1 and 7.\n");

    return 0;
}*/

// using switch case

#include <stdio.h>

int main()
{
    int day;

    printf("Enter day number (1 to 7):");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuesday");
        break;
    case 5:
        printf("Wednesday");
        break;
    case 6:
        printf("Thursday");
        break;
    case 7:
        printf("Friday");
        break;
    default:
        printf("Invalid input. Please enter a number between 1 and 7.");
    }

    return 0;
}
