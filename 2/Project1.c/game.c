#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nGuesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Guess any number between 1 and 100\n");
        scanf("%d", guess);
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Greater number please\n");
        }
        else
        {
            printf("Yayy you got it!\n You took %d attempts\n", nGuesses);
        }
        nGuesses++;

    } while (guess != number);

    return 0;
}