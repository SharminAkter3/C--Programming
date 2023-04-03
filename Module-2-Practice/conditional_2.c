#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("burger Khabo");
    }
    else if (tk >= 50)
    {
        printf("Fuckha Khabo");
    }
    else if (tk >= 20)
    {
        printf("ice-cream Khabo");
    }
    else
    {
        printf("Khabo na");
    }
    return 0;
}