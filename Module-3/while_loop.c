/*
basic syntex of while loop
  initialization;
  while(condition){
    kaj ta;
    inccrement/decrement;
  }
*/

#include <stdio.h>
int main()
{
    int i, n;
    i = 1;
    while (i <= 5)
    {
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
}