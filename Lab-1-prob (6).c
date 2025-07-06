#include <stdio.h>

int main()
{
char l;
    printf("Enter the lowercase letter:%c",l);
    scanf("%c",&l);
    char u=l-32;
    printf("Uppercase:%c",u);
    return 0;
}

//another way without ASCII
/*#include <stdio.h>
#include <ctype.h> // for toupper

int main()
{
    char l;
    printf("Enter a lowercase letter: ");
    scanf(" %c", &l);  // notice the space before %c naile \n ke grab korte pare

    char u = toupper(l);
    printf("Uppercase: %c\n", u);

    return 0;
}*/