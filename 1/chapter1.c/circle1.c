#include<stdio.h>

int main()
{
    int r;
    const float pi = 3.14;
    printf("Enter the value of radius\n");
    scanf("%d", &r);
    printf("The area of circle is %f \n", pi*r*r);
    int h;
    printf("Enter the value of height \n");
    scanf("%d", &h);
    printf("The volume of cylinder is %f", pi*r*r*h);

    return 0;
}