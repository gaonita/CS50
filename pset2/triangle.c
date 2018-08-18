#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    for (int i = 1; i <= 3; i++)
    {
        for(int j = 3; j < 2 * i - 1; i--)
        {
            printf("*");
        }
        for (int j = i; j > 3; j++)
        {
            printf(" ");
        }
        printf("\n");
    }

}