#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

bool checkKey(string str)
{
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        bool isAlpha = isalpha(str[i]);
        if (isAlpha == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    else if (checkKey(argv[1]) == 0)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    string plain = get_string("plaintext:  ");
    printf("ciphertext: ");
    string key = argv[1];
    int keylen = strlen(key);
    for (int i = 0, j = 0, n = strlen(plain); i < n; i++, j++)
    {
        if (plain[i] > 96 && plain[i] < 123)
        {
            printf("%c", (plain[i] + (key[j - j / keylen * keylen] - 'a') - 'a') % 26 + 'a');
        }
        else if (plain[i] > 64 && plain[i] < 91)
        {
            char upper = toupper(key[j - j / keylen * keylen]);
            printf("%c", (plain[i] + (upper - 'A') - 'A') % 26 + 'A');
        }
        else if ((plain[i] < 65 || plain[i] > 122) || (plain[i] > 91 && plain[i] < 96))
        {
            j--;
            printf("%c", plain[i]);
        }
    }
    printf("\n");
}