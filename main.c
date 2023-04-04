#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randNum;
    int guess;
    int guessCount = 7;
    int guessLimit = 0;

    // Seed: It is an integer value that contains a seed for a new sequence of pseudo-random numbers.
    srand(time(0));
    randNum = rand() % 100;

    do
    {
        printf("I have generated a random number between 1 and 100. What is it?: \n");
        scanf("%d", &guess);

        if (guess > randNum && guessCount != guessLimit)
        {
            printf("Sorry, too high. Try again. You have %d lives left.\n", guessCount - 1);
            guessCount--;

        }
        else if (guess < randNum && guessCount != guessLimit)
        {
            printf("Sorry, too low. Try again. You have %d lives left.\n", guessCount - 1);
            guessCount--;
        }
        else
        {
            if (guessCount == guessLimit)
            {
                printf("You ran out of lives. YOU LOSE! The answer was %d.", randNum);
                break;
            }
            else
            {
                printf("YOU WIN!");
                break;
            }
        }
    }
    while(guess != randNum);


    return 0;
}
