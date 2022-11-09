#include <stdio.h>
int factorai(int);
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("The factorial of the number  is %d\n", factorail(a));
    return 0;
}
int factorai(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return n * factorai(n - 1);
}