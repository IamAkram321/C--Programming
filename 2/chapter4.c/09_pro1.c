// // Write a program to print multiplication table of a given number.
// #include<stdio.h>

// int main(){
//     int n=3;
//     for (int i = 1; i < 11; i++)
//     {
//          printf("%dX%d=%d\n", n,i,n*i);
//     }

//     return 0;
// }
#include <stdio.h>

int main()
{
    // int n = 16;
    int n;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &n);
    for (int i = 1; i < 11; i++)
    {
        printf("%dX%d=%d\n", n, i, n * i);
    }
    return 0;
}