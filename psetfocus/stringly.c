// #1: Consider having all the functions after the main and have the signature before the main.
// That gives the reader more readability.

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool isin(char c, string s);
char flip(char c);
string reverse(string s);
bool equal(string s1, string s2);
int vowels(string s);
int windows(string s);
bool palindrome(string s);
string boolToString(int n);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("We need a input string\n");
        return 0;
    }

    int option = get_int(
                     " Please choose what to do with the string:"
                     "\n 1- Count how many vowels are in the string"
                     "\n 2- Count how many window letters in the string"
                     "\n 3- Reverse the string case"
                     "\n 4- Check if the string is a palindrome"
                     "\n Your option:");
    if (option == 1)
    {
        printf("Vowels in the string: %i\n", vowels(argv[1]));
    }
    if (option == 2)
    {
        printf(" Windows in the string: %i\n", windows(argv[1]));
    }
    if (option == 3)
    {
        printf(" Reverse string: %s\n", reverse(argv[1]));
    }
    if (option == 4)
    {
        printf("%i\n",palindrome(argv[1]));
    }
}

// //1- Write a small function that takes a char, and a string checks if the char is within the string.
bool isin(char c, string s)
{
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (s[i] == c)
        {
            return true;
        }
    }
    return false;
}
// 2- Write a small function that takes a char and flips its case (a -> A or A -> a)
char flip(char c)
{
    if (!isupper(c))
    {
        return toupper(c);
    }
    return tolower(c);
}
// 3- Write a function that takes a string and reverse it (hello -> olleh)
string reverse(string s)
{
    int len = strlen(s);
    string reverse_string = malloc(sizeof(char) * (len + 1) );
    int counter = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        reverse_string[counter] = s[i];
        counter ++;
    }
    // #3: You do not need to assign \0 after the string since you have already declared reverse_string as a string.
    //reverse_string[counter] = '\0';
    return reverse_string;
}
// 4- Write a function that takes two strings and if check if they are equal,
bool equal(string s1, string s2)
{
    for (int i = 0; i < strlen(s1); i++)
    {
        if (strlen(s1) != strlen(s2) || tolower(s1[i]) != tolower(s2[i]))
        {
            return false;
        }
    }
    return true;
}

// 1- Count how many vowels are in the string
int vowels(string s)
{
    string vowels = "aAeEiIoOuU";
    int counter = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (isin(s[i], vowels) == 1)
        {
            counter ++;
        }
    }
    return counter;
}

// 2- Count how many window letters in the string
int windows(string s)
{
    string windows = "ABDOPQR";
    int counter = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (isin(s[i], windows) == 1)
        {
            counter ++;
        }
    }
    return counter;
}

// 3- Reverse the string case

// #5: It is better to return a boolean in palindrome and do the prints in the main method.
// since now you print for example hello is NOT palindrome false.😻

// 4- Check if the string is a palindrome
bool palindrome(string s)
{
    // #2: You can directly use if (equal(s, reverse(s)))
    if (equal(s, reverse(s)))
    {
        printf(" %s is palindrome", s);
        return true;
    }
    printf(" %s is NOT palindrome", s);
    return false;
}

// string boolToString(int n)
// {
//     return n ? "true" : "false";
// }


// #4: It is better to have this explanation in the begginig of the code even before the include
// so the reader knows what this code will do.
