#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int width_check(string str)
{
    int width = 0;
    char end = str[strlen(str) - 1];
    char first = str[0];
    width = end - first + 1;
    return width;
}

int main(int argc, string height[27])
{
    if (argc != 27)
    {
        printf("Error!");
        return 1;
    }
    string input = get_string("Text to highlight: ");
    int highest = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        int char_position = input[i] - 96;
        int char_height = atoi(height[char_position]);
        if (char_height > highest)
        {
            highest = char_height;
        }
    }
    printf("area: %i\n", width_check(input) * highest);

}


