#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int ansr = x / 1000;
    if (ansr % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}