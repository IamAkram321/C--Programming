#include<stdio.h>

int main(){
    int a;
    printf("Enter the number \n");
    scanf("%d", &a);
    if(a<=10){
        printf("I love you\n");
    }
    else if (a<=5){
        printf("I want to kiss you\n");
    }
    else{
        printf("I hate you");
    }

    return 0;
}