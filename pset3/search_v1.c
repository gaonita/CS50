//Write a program that ask a user for a text and then prompt the user for a keyword,
//then check if the keyword is within that text, ignore case sensitivity:
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *text = get_string("Text: ");
    //char *text = malloc(strlen(text) * sizeof(char));
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
// Text: Today is gonna be the day that I throw it back to you
// Keyword: DAY
// Yes “day” is at position 22

// Text: Today is gonna be the day that I throw it back to you
// Keyword: hello
// No “hello” is not within the text


// bool equal(string s1, string s2)
// {
//     for (int i = 0; i < strlen(s1); i++)
//     {
//         if (strlen(s1) != strlen(s2) || tolower(s1[i]) != tolower(s2[i]))
//         {
//             return false;
//         }
//     }
//     return true;
// }

