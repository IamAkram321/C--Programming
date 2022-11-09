// Write a recursive function to calculate the sum of first n natural numbers.
#include <stdio.h>
int sum(n);
int main()
{
    int n;
    printf("Enter the value upto which you want to calculate the sum\n");
    scanf("%d", &n);
    printf("The sum of first above natural numbers is %d\n", sum(n));
    return 0;
}
int sum(int n)
{
    return (n * (n + 1)) / 2;
    // if (n==1)
    // {
    //    return 1;
    // }

    // return sum(n-1)+n;
}