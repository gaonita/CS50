#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int min(int len, int numbers[]);

int main(int argc, string argv[])
{
    // Safe guarding for wrong number of inputs
    if (argc == 1)
    {
        printf("Provide some number please");
        return 1;
    }

    int len = argc  - 1;
    int numbers[len];
    for (int i = 0; i < len; i++) {
       numbers[i] = atoi(argv[i + 1]);
    }

    printf("%d\n", min(len, numbers));
}


int min(int len, int numbers[])
{
    int minimum = numbers[1];
    for (int i = 0; i < len; i++)
    {
        if (numbers[i] < minimum)
        {
            minimum = numbers[i];
        }
    }

    return minimum;
}