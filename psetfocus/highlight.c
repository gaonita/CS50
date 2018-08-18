// #1: Consider having all the functions after the main and have the signature before the main.
// That gives the reader more readability.

// #2: I think you have understood the task differently
// (that the input would be in alphabetic order) which does not necessarily have to be
// eg: the area of "hello" is width * (highest alphabet in the input) = 5 * 5 = 25 and not 40. 👻

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

// #3: I assume that the function width_check calculates the width of a string eg: width_check("abc") = 3 and
// width_check("aaaaa") = 5 and therefore the function strlen() could be used instead.
// But this width_check is calculates and returns the difference between first and last character which is not what it is
// supposed to reflect. You can delete this function since it does not calculate the width of a string. 🙂

// int width_check(string str)
// {
//     int width = 0;
//     char end = str[strlen(str) - 1];
//     char first = str[0];
//     width = end - first + 1;
//     return width;
// }

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
    printf("area: %lu\n", strlen(input) * highest);
}


