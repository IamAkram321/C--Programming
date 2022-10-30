// Sum of natural numbers using while loop
#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;

    while (i <= 10)
    {
        sum = sum + i;
        // sum +=i;
        i++;
    }
    printf("The sum of first 10 natural numbers is %d:\n", sum);
    return 0;
}
// Sum of natural numbers using for loop
// #include<stdio.h>

// int main(){
//     int i;
//     int sum=0;
//     for(i=1;i<=10;i++)
    
//     {
//         sum=sum+i;
        
//     }   
//         printf("The sum of first 10 natural numbers is %d:\n",sum);
    
//     return 0;
// }
 
