#include <stdio.h>
int main()
{
    int a, b;
    char plus = '+', minus = '-', multiply = '*', divided = '/';
    scanf("%d %d", &a, &b);

    // summation
    int sum = a + b;
    printf("%d %c %d = %d\n", a, plus, b, sum);

    // substruction
    int sub = a - b;
    printf("%d %c %d = %d\n", a, minus, b, sub);

    // multiplication
    int mul = a * b;
    printf("%d %c %d = %d\n", a, multiply, b, mul);

    // Divition
    float div = a * 1.0 / b;
    printf("%d %c %d = %0.2f\n", a, divided, b, div);

    return 0;
}