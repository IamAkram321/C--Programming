#include <stdio.h>

int main()
{
    int n, i, count = 0;
    printf("Enter any number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("This is a prime number\n");
    }
    else
    {
        printf("This is not a prime number\n");
    }

    return 0;
}