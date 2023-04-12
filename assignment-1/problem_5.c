#include <stdio.h>
int main()
{
    int N, remainingTAKA;
    scanf("%d", &N);
    remainingTAKA = N - 1000;
    if (N > 1000)
    {
        printf("I will buy Punjabi\n");
        if (remainingTAKA >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}