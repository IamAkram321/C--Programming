// // Write a program to print multiplication table of a given number.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number you want multiplication of in reverse order:\n");
    scanf("%d", &n);
    for (int i = 10; i > 0; i--)
    {
        printf("%dX%d=%d\n", n, i, n * i);
    }

    return 0;
}