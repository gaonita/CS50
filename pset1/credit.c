#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n = 10;
    while (true)
    {
        n = get_long_long("Number: ");

        if ((n >= 34 * pow(10, 13) && n < 35 * pow(10, 13))
            || (n >= 37 * pow(10, 13) && n < 38 * pow(10, 13)))
        {
            printf("AMEX\n");
            break;
        }

        else if (n >= 51 * pow(10, 14) && n < 56 * pow(10, 14))
        {
            printf("MASTERCARD\n");
            break;
        }

        else if ((n < 5 * pow(10, 12) && n >= 4 * pow(10, 12))
                 || (n < 5 * pow(10, 13) && n >= 4 * pow(10, 13))
                 || (n < 5 * pow(10, 14) && n >= 4 * pow(10, 14))
                 || (n < 5 * pow(10, 15) && n >= 4 * pow(10, 15)))
        {
            printf("VISA\n");
            break;
        }

        else
        {
            printf("INVALID\n");
            break;
        }
    }
}