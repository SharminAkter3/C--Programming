#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        int ansr = a - 32;
        printf("%c", ansr);
    }
    else
    {
        int ansr = a + 32;
        printf("%c", ansr);
    }
    return 0;
}