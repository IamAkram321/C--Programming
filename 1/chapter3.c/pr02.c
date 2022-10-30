#include <stdio.h>

int main()
{
    int Physics, Chemistry, Mathematics;

    printf("Enter the marks of Physics\n");
    scanf("%d", &Physics);

    printf("Enter the marks of Chemistry\n");
    scanf("%d", &Chemistry);

    printf("Enter the marks of Mathematics\n");
    scanf("%d", &Mathematics);

    float total = (Physics + Chemistry + Mathematics) / 3;
    if (total >= 40)
    {
        if (Physics < 33 || Chemistry < 33 || Mathematics < 33)
        {
            printf("Sorry! Your individual marks in one of the subjects are less than 33");
        }
        else
        {
            printf("Congratulations! You have passed with good marks");
        }
         
    }
    else
    {
        printf("Sorry you have not passed because your marks are less than 40%");
    }

    return 0;
}