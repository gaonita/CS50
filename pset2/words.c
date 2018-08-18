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