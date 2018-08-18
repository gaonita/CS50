#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = -1;

    while (x < 0 || x >= 1)
    {
        x = get_float("Change owed: ");
    }

    int y = x * 100;

    {
        int nQuarters = y / 25;
        int nDimes = y % 25 / 10;
        int nNickels = y % 25 % 10 / 5;
        int nCents = y % 25 % 10 % 5 / 1;

        printf("%i\n", nQuarters + nDimes + nNickels + nCents);
    }
}