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





// extra

/*#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("(%d, %d) point is on the 1st quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("(%d, %d) point is on the 2nd quadrant.\n", x, y);

        // Check if on the rectangle inside 2nd quadrant
        if (x >= -4 && x <= -1 && y >= 1 && y <= 4) {
            printf("It is on the Rectangle.\n");
        } else {
            printf("It is not on the Rectangle.\n");
        }

    } else if (x < 0 && y < 0) {
        printf("(%d, %d) point is on the 3rd quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("(%d, %d) point is on the 4th quadrant.\n", x, y);
    } else {
        printf("(%d, %d) point is on the axis.\n", x, y);
    }

    return 0;
}
*/
