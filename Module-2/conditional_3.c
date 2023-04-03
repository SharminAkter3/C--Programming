#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox's Bazar Jabo\n");
        if (tk >= 10000)
        {
            printf("Saint Martin Jabo\n");
        }
        else
        {
            printf("Jabo na\n");
        }
    }
    else
    {
        printf("Basai Bosy Thakbo\n");
    }
    return 0;
}