#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = -1;
    while (x <= 0 || x > 24)
    {
        x = get_int("Height: ");
    }
    for (int i = 1; i <= x; i++)
    {
        for (int j = x; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        {
            printf("  ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }

}