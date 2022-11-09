// User defined functions
#include <stdio.h>
// Function declarations or function prototypes
printIn();
int add(int, int);
int sub(int x, int y);

int main()
{
    int a, b, sum, diff;
    printf("Enter the values\n");
    scanf("%d%d", &a, &b);

    sum = add(a, b);
    diff = sub(a, b);
    printIn();
    printf("Result of addition is %d\n", sum);
    printf("Result of subtraction is %d\n", diff);

    return 0;
}
printIn()
{
    printf("Ruk jaa bsdk tera hi hisab kar raha hu \n");
}
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
      