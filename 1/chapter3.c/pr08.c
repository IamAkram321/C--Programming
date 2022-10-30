// Write a program to calculate the factorial of a given number using 'For Loop':
#include <stdio.h>

int main()
{
    int factorial = 1;
    // int n =0;(This is input provided by user)
    int n;
    printf("Enter the number\n",n);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial=factorial*i;
        
    }
    printf("The value of factorial is %d", factorial);
    
    return 0;
}
