/*
basic syntex of do-while loop
  initilization;
  do
  {
    kaj ta;
    increment/decrement;
  }
  while(condition)
*/

#include <stdio.h>
int main()
{
    int i, n;
    i = 1;
    do
    {
        printf("%d\n", i);
        i = i + 1;
    } while (i <= 5);
    return 0;
}