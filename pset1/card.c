#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
        long long n = 378282246310005;
        double nLog = ceil(log10(n));
        long long nLog10 = pow(10,nLog);

        //7•2 + 2•2 + 2•2 + 4•2 + 3•2 + 0•2 + 0•2
        int sum = 0;

        for(long long i = 10; i < nLog10; i *=100)
        {
            int theDigit = (n/i) %10;
            int doubleTheDigit = theDigit *2;
            if (theDigit<10)
            {
                sum += doubleTheDigit;
            }
            // in case (10, 12, 14, 16, 18)
            else
            {
                sum += 1 + doubleTheDigit % 10;
            }

            printf("Check sum %d\n", sum);
        }
}