#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter x and y coordinates:\n");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
    {
        printf("(%d,%d) point is on the 1st quadrant", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("(%d,%d) point is on the 2nd quadrant", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("(%d,%d) point is on the 3rd quadrant", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf("(%d,%d) point is on the 4th quadrant", x, y);
    }

    else if ((x > 0 && y == 0) || (x < 0 && y == 0))
    {
        printf("(%d,%d) point is on the x axis", x, y);
    }
    else if ((x == 0 && y > 0) || (x == 0 && y < 0))
    {
        printf("(%d,%d) point is on the y axis", x, y);
    }
    else if (x == 0 && y == 0)
    {
        printf("(%d,%d) point is the origin", x, y);
    }

    return 0;
}