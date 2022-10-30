// C program to find whether the number is prime or not using while loop:
#include <stdio.h>

int main()
{
    int n, count = 2, i=1;
    printf("Enter the value of number\n");
    scanf("%d", &n);
    while (count < n)
    {
        if (n % count == 0)
        {
            i = 0;
            break;    
        }
            count++;
    }
    if(i)
    {
        printf("%d is primr no.", n);
    }
    else{
        printf("%d is not prime.", n);
    }

    return 0;
}