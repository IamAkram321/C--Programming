#include<stdio.h>

int main()
{
    int b;
    int c;
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    int a = !(c==b)?3:7;
    printf("The value of a is %d", a);
    return 0;
}