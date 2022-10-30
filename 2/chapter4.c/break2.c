#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        if (i==6)
        {
            break;
        }
        
        printf("%d\n", i);
    }
    printf("We are outside the loop now");
   

    return 0;
}