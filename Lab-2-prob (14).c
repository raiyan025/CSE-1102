#include <stdio.h>
int main()
{
    char a;
    printf("Input an alphabet:");
    scanf("%c", &a);

    if (((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) &&
        ((a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u') ||
         (a == 'A') || (a == 'E') || (a == 'I') || (a == 'O') || (a == 'U')))

    {
        printf("The alphabet is vowel");
    }
    else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("The alphabet is a consonant");
    }
    else
    {
        printf("Not an alphabet");
    }

    return 0;
}