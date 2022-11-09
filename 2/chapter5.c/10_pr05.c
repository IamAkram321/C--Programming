// What will the following line produce in a C program:
#include<stdio.h>

int main(){
    int a=4;
    printf("%d %d %d\n", a, ++a, a++);
    return 0;
}
// Evaluated from left to right: 1st a++ will print 4 and then increases the value as 5, then ++a will increase 5 to 6 and then print and finally a will be printed:
// Like this: 6 6 4
