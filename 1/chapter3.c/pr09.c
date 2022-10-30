// Input Provided by the User:
//  #include <stdio.h>
// int main()
// {
//     int n,i,f;
//     f=i=1;
//     printf("Enter a Number to Find Factorial: ");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         f*=i;
//         i++;
//     }
//     printf("The Factorial of %d is : %d",n,f);
//     return 0;
// }
// By Hard Coded Input
 #include <stdio.h>
int main()
{
    // int n=5,i,f;
    int n=5,i,factorial;
    // f=i=1;
    factorial=i=1;
    while(i<=n)
    {
        // f*=i;
        factorial=factorial*i;
        i++;
    }
    // printf("The Factorial of %d is : %d",n,f);
    printf("The Factorial of %d is : %d",n,factorial);
    return 0;
}