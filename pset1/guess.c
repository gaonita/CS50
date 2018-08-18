#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    int x = 0;
    char answer = 'Y';

    while (answer == 'Y' || answer == 'y')

    {
        int r = rand() % 20;
        for (int i = 5; i > 0; i--)
        {
            x = get_int("Guess the number: ");
            if (x > r)
            {
                printf("less than %i...! (%i chances left)\n", x, i - 1);
            }
            else if (x < r)
            {
                printf("greater than %i...! (%i chances left)\n", x, i - 1);
            }

            else
            {
                printf("Correct!!\n");
                break;
            }
        }
        answer = get_char("Do you want to play again?(Y/N)");
    }
}