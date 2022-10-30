#include <stdio.h>

int main()
{
    int income;
    float tax = 0;
    printf("What is your income\n");
    scanf("%d", &income);
    if (income < 60000)
    {
        printf("Your income is less than 60000 and so no tax for you\n");
    }
    else if (income > 60000 && income < 100000)
    {
        printf("Your income is between sixty thousand and one lakh\n");
        tax = tax + 0.05 * (income - 60000);
    }
    else if (income > 100000 && income < 200000)
    {
        printf("Your income is between one lakh and two lakhs\n");
        tax = tax + tax + 0.05 * (100000 - 60000);
        tax = tax + 0.2 * (income - 100000);
    }   
    else if (income > 200000 && income < 300000)
    {
        printf("Your income is between two lakhs and three lakhs\n");

        tax = tax + tax + 0.05 * (100000 - 60000);
        tax = tax + 0.2 * (200000 - 100000);
        tax = tax + 0.3 * (income - 200000);
    }
    else
    {
        printf("Your income is above 3 lakhs\n");
        tax = tax + tax + 0.05 * (100000 - 60000);
        tax = tax + 0.2 * (200000 - 100000);
        tax = tax + 0.3 * (300000 - 200000);
        tax = tax + 0.4 * (income - 300000);
    }
    printf("Total tax to be paid is %f\n", tax);

    return 0;
}