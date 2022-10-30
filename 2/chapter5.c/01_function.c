#include <stdio.h>
// This 'void display()' is a functin prototype
void display();
// void average(int,float,int); Function prototype 
int main()
{
    //  This 'display()'  is function call
    display();
    return 0;
}
// Function Definition
void display()
{
    printf("Hello World1\n");
    printf("Hello World2\n");
    printf("Hello World3\n");
    printf("Hello World4\n");
    printf("Hello World5\n");                       
}
// So this question might be arise in everyone's mind that for printing only hello world why we are using display function..So let me tell you, display function  executes/displays the code any number of times but if we print hello world like normally it prints only one time.
