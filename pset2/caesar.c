#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//converter -> atoi
int converter(string str);
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    string p = get_string("plaintext:  ");
    printf("ciphertext: ");
    int key = converter(argv[1]);
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        if ((p[i] < 65 || p[i] > 122) || (p[i] > 91 && p[i] < 96))
        {
            printf("%c", p[i]);
        }
        else if (p[i] > 96 && p[i] < 123)
        {
            printf("%c", (p[i] + key - 'a') % 26 + 'a');
        }
        else if (p[i] > 64 && p[i] < 91)
        {
            printf("%c", (p[i] + key - 'A') % 26 + 'A');
        }
    }
    printf("\n");
}
int converter(string str)
{
    int sum = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        sum += (str[i] - '0') * pow(10, strlen(str) - 1 - i);
    }
    return sum;
}