// I really liked your way of solving this problem! Wow so short and effective!
// The only issue which I am not sure about (since Oussa has not a clear defined problem description
// for word) is that what if we have digits in the command line argument?
// eg: Hi 2 is equal to 1 word or 2 words? 🤔
#include <cs50.h>
#include <stdio.h>
int main(int argc, string argv[])
{
    if (argc == 1)
    {
        printf("Provide sentence!");
        return 1;
    }
    else if (argv[1] != 0)
    {
        printf("%i\n", argc - 1);
    }
}