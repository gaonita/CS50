#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Text: ");
    char* text = malloc(sizeof(char));
    char currentChar;
    int currSize = 0;
    while ((currentChar = getchar()) != '\n')
    {
        text = realloc(text, sizeof(char) * (currSize + 1));
        text[currSize++] = currentChar;
    }

    //char x = get_char("");
    //char **text = malloc(strlen(text) * sizeof(char));

    char *keyword = get_string("Keyword: ");


    for (int i = 0, j = 0, len = strlen(text); i < len; i++)
    {

        if (text[i] == keyword[j])
        {
            j++;
            if (j == strlen(keyword) - 1)
            {
                int position = i;
                printf("j = %i\ni = %i\nposition = %i\n", j, i, position);
                printf("Yes \"%s\" is at position %d\n", keyword, position - 1);
            }
        }
        // else
        //     {
        //         printf("No \"%s\" is not within the text\n", keyword);
        //         break;
        //     }
    }
}