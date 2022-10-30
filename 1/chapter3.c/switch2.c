#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c;

    printf("Enter the final percentage. \n");
    scanf("%d",&a);



    // int y=(a+b+c)/300;
    // int result=y*100;


    switch (a)
    {
    case 91 ... 100:
    printf("A+ \n");
        break;
    case 81 ... 90:
    printf("A \n");
        break;
    case 71 ... 80:
    printf("B+ \n");
        break;
    
    default:
        printf("No cases matched");
        break;
    }

    return 0;
}