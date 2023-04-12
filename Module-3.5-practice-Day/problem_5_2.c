#include <stdio.h>
int main()
{
    int i, N;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d-Yes", i);
        }
        else
        {
            printf("%d-No", i);
        }
    }

    return 0;
}