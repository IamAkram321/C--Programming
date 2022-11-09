// Use the library function to calculate the area of square having side a.
#include <stdio.h>

#include <math.h>
int main()
{
    // double a = 2.2;
    double a;
    printf("Enter the value of a\n");
    scanf("%lf", &a);  
    printf("The area of square is %0.1lf", pow(a, 2));
    return 0;
}
// In above problem we can also use 'int' but i used 'double' because it will work for decimal also
// For double we use '%lf' not '%d': '%d' is for int variable
// I used '%0.1lf' so that only one decimal point occurs.Similarly for 2 decimal you have to put 0.2 and so on.
// We use 'lf' for double