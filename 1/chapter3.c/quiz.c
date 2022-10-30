#include<stdio.h>

int main()
{
    float P = 40;
    float C = 95;
    float M = 98;
    float E = 99;
    float result =  (P+C+M+E)/400;
    float final_result=result*100;
    printf("The grade of student is %f \n", final_result);
    if(final_result>=90){
        printf("The grade of student is A+");
    }
    
    else if (final_result<90)
    {
        printf("It is not A+");
    }
    


    return 0;
}