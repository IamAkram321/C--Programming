// #include<stdio.h>

// int main(){
//     int i = 7;
//     while(i<5){
//         printf("The value of i is %d", i);
//     }
//     return 0;
// }
//  It does not get executed because the condition is fale. So what while loop does is,
//  it first checks the condition and then only executes it. And since the condition is false itself it will not be executed!!!

// BUT Let's see the DO-WHILE LOOP
#include<stdio.h>

int main(){
    int i=7;
    do
    {
        printf("The value of i is %d\n", i);
         
    } 
    while(i<5);
    return 0; 
}