#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        printf("%c is already in lowercase", a);
    }
    else if (a >= 'A' && a <= 'Z')
    {
        printf("Lowercase of %c is:%c", a, a + 32);
    }
    else
    {
        printf("%c is not an alphabet", a);
    }

    return 0;
}