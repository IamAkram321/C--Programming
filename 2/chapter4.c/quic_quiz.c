#include<stdio.h>

int main()
{
    int i;
    printf("The natural numbers in reverse order are:\n");
    for (i = 10; i; i--) 
    {   
    printf("%d\t", i);
    }
    
    return 0;
}