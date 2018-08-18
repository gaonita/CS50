#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

// #2: You can just use strlen(str)
int width_check(string str)
{
    return strlen(str);
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



// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int area(int width, int height);  // area(4, 5) + 2, area(w, h), printf("%d", area(4, 5)), int v = area(4, 5)
// int max(int len, int numbers[]);

// int main(int argc, string argv[])
// {
//     // Safe guarding for wrong number of inputs
//     if (argc != 27)
//     {
//         printf("Wrong number of arguments");
//         return 1;
//     }

//     int alpha_heights[26]; // array to store alphabets heights

//     // 1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
//     for (int i = 0; i < 26; i++) {
//       alpha_heights[i] = atoi(argv[i + 1]);
//     }

//     string text = get_string("Text to highlight: ");
//     int width = strlen(text);
//     int text_heights[width];

//     // To get the hight of a given char c => alpha_heights[c - 'a']
//     for (int i = 0; i < width; i++)
//     {
//         text_heights[i] = alpha_heights[text[i] - 'a'];
//     }

//     int height = max(width, text_heights);
//     printf("%d\n", area(width, height));
// }

// int area(int width, int height)
// {
//     return width * height;
// }

// int max(int len, int numbers[])
// {
//     // We trust Fatemeh :D
//     int maximum = 0;
//     for (int i = 0; i < len; i++)
//     {
//         if (numbers[i] > maximum)
//         {
//             maximum = numbers[i];
//         }
//     }

//     return maximum;
// }