#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool is_vowel(char c);
int vowel_count(string str);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("ERROR!!\n");
        return 1;
    }
    printf("%i", vowel_count(argv[1]));
}

bool is_vowel(char c)
{
    string vowels = "aAeEiIoOuU";
    for (int i = 0; i < strlen(vowels); i++)
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
    for (int i = 0; i < strlen(str); i++)
    {
        if (is_vowel(str[i]) == true)
        {
            count += 1;
        }
    }
    return count;
}
