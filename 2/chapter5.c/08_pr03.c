// // Write a function to calculate force of attraction on a body of mass 'm' exerted by earth (9.8 m/s^2)
// Value entered by the user:
#include <stdio.h>
double force(float);
int main()
{
    float m;
    printf("Enter the value of mass: \n");
    scanf("%f", &m);
    float g;
    printf("Enter the value of gravity: \n");
    scanf("%f", &g);
    printf("The force of attraction on body is %0.2lf\n", force(m * g));
    return 0;
}
double force(float f)
{
    return f;
}
//
// Specific value :
// #include <stdio.h>
// double force(float);
// int main()
// {

//     float m = 6.0;
//     float g = 9.8;
//     printf("The value of force exerted on the body is %lf\n", force(m * g));
//     return 0;
// }
// double force(float f)
// {
//     return f;
// }
