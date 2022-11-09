// Write a function to convert celcius temperature into fahrenheit.
#include <stdio.h>
float c2f(float c);

int main()
{
    float c = 0.0;
    float f = c2f(c);
    printf("The value of %0.1f degree celcius in fahreheit is %0.1f", c, f);
    return 0;
}
float c2f(float c)
{
    float f = (c * 9 / 5.0) + 32;
    return f;
}
 