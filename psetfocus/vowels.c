#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool is_vowel(char c);
int vowel_count(string str);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        // #1: You can use the following error too which may help the user better:
        // printf("Usage: ./vowel string \n");
        printf("Usage: ./vowel string\n");
        return 1;
    }
    // #5: consider having a new line /n 😅
    printf("%i\n", vowel_count(argv[1]));
}

bool is_vowel(char c)
{
    string vowels = "aAeEiIoOuU";
    // #2: Performance hack here, have the string length function call
        // in the initializer instead of the loop condition.
        // something like this:
        // for (int i = 0, l = strlen(plaintext); i < l; i++)
        // strlen cost 10s 😋
    for (int i = 0, len = strlen(vowels); i < len; i++)
    {
        if (c == vowels[i])
        {
            return true;
        }
    }
    return false;
}

int vowel_count(string str)
{
    int count = 0;
    // #3 : the same as #2 🙃
    for (int i = 0, len = strlen(str); i < len; i++)
    {
        // #4: You can cut the following line shorter to:
        // if (is_vowel(str[i]))
        if (is_vowel(str[i]) == true)
        {
            count += 1;
        }
    }
    return count;
}
