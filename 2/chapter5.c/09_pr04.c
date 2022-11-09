// Write a program using recursion to calculate nth element of fibonacci series.
#include <stdio.h>
int fib(n);
int main()
{
    // int n=8;
    int n;
    printf("Enter the value\n");
    scanf("%d", &n);
    printf("The %dth element of fibonacci series is %d", n, fib(n));
    return 0;
}
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}
//  1 1 2 3 5 8 13 21
