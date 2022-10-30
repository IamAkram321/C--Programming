#include<stdio.h>

int main(){
    int age = 2;
    int placeCode = 12;
    // // scenario 1
    // if(age>18){
    //     printf("You are eligible to drive\n");
    // }
    // else if(age>=10){
    //     printf("You are not eligible to drive but we will look for a toy vehicle for you\n");
        
         
    // }
    // else{

    //     printf("Sorry you are a kid and can not drive\n");
    // }
     
    // scenario 2
    if(age>18){
        printf("You are eligible to drive\n");
    }
    if(age<=10){
        printf("You are not eligible to drive but we will look for a toy vehicle for you\n");
        
         
    }
    if(age<=8){

        printf("Sorry you are a kid and can not drive\n");
    }
    return 0; 
}
    
