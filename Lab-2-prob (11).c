#include <stdio.h>

int main()
{

    int T;
    printf("Input Temperature\n");
    scanf("%d", &T);
    if (T<0)
    {
        printf("Freezing Weather");
    }
    else if (T<=10 && T>=0)
    {
        printf("Very Cold Weather");
    }
    
    else if (T<=20 && T>10)
    {
        printf("Cold Weather");
    }
    else if(T<=30 && T>20)
    {
        printf("Normal Temperature");
    }
else if (T<=40 && T>30)
{
    printf("It's Hot");
}

else
{
    printf("It's Very Hot");
}


    return 0;
}