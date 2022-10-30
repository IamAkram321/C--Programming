#include <stdio.h>

int main()
{
    int n = 19, isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        printf("The number is Prime\n");
    }
    else
    {
        printf("The number is not Prime\n");
    }

    return 0;
}
// The following code in not mine. I have taken it from programmiz.com
// #include <stdio.h>

// int main() {

//   int n, i, flag = 0;
//   printf("Enter a positive integer: ");
//   scanf("%d", &n);

//   // 0 and 1 are not prime numbers
//   // change flag to 1 for non-prime number
//   if (n == 0 || n == 1)
//     flag = 1;

//   for (i = 2; i <= n / 2; ++i) {

//     // if n is divisible by i, then n is not prime
//     // change flag to 1 for non-prime number
//     if (n % i == 0) {
//       flag = 1;
//       break;
//     }
//   }

//   // flag is 0 for prime numbers
//   if (flag == 0)
//     printf("%d is a prime number.", n);
//   else
//     printf("%d is not a prime number.", n);

//   return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n, i, m = 0, flag = 0;
//     printf("Enter the number to check prime:");
//     scanf("%d", &n);
//     m = n / 2;
//     for (i = 2; i <= m; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("Number is not prime");
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//         printf("Number is prime");
//     return 0;
// }
