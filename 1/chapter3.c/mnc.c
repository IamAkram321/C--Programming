// Mutiplication Table Using 'For' loop:
// #include<stdio.h>

// int main(){
//     int n=9;
//     for(int i = 1; i<11; i++)
//     {
//       printf("%dx%d=%d\n", n,i,n*i);
//     }
//     return 0;
// }

// Multiplication Table Using 'While' Loop

// #include<stdio.h>

// int main(){
//     int n=8,sum=0;
//     int i=1;
//     while(i<=10){
//         printf("%d * %d=%d\n", n,i,n*i);
//         i++;
//     }  
//     return 0;
// }
// Factorial of a number using while loop
#include<stdio.h>

int main(){
    int n=5,i,f;
    f=i=1;
    while(i<=n){
        f*=i;
        i++;
    }
    printf("The factorial of given number is %d\n", f);
    return 0;
}