#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int x = get_int("Say a positive number between 1 and 23: ");
           //(x >= 1 && x < 24)
    while (x <= 0 || x > 24)
    {
       x = get_int("Say a positive number between 1 and 23: ");
    }
    int y = x+1;
    for (int i = 2; i <= y; i++)
    {
        for (int j = y; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}