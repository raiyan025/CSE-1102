#include <stdio.h>

int main()
{
    int month;

    printf("Enter Month Number (1-12): ");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
        printf("Month have 31 days\n");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("Month have 30 days\n");
    else if (month == 2)
        printf("Month have 28 or 29 days\n");
    else
        printf("Invalid month number!\n");

    return 0;
}