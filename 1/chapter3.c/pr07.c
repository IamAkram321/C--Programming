// Write a program to calculate the sum of the numbers occuring in the multiplication of 8.(This is using while loop)
#include <stdio.h>

int main()
{
    int n = 8, sum = 0;
    int i = 1;
    while (i <= 10)
    {
        // a=n*i;
        printf("%d * %d = %d\n", n, i, n * i);
        sum = sum + (n * i);
        i++;

    }
    printf("%d\n", sum);
    return 0;
}
// This is using 'For' Loop
// #include <stdio.h>

// int main()
// {
//     int sum = 0, n = 8;
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d*%d=%d\n", n, i, n * i);
//         sum = sum + (n * i);
//     }
//     printf("The sum of numbers occuring in the multiplication table of 8 is %d\n", sum);
//     return 0;
// }