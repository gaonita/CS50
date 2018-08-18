#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
// 1. Print all the integers between 0 and 10.
// int main(void)
// {
//     for(int i = 0; i < 11; i++)
//     {
//         printf("%d\n", i);
//     }
// }

// 2. Print the sum of all integers between 1 and 10.

// int main(void)
// {
//     int sum = 0;
//     {
//         for(int i = 0; i < 11; i++)
//         {
//             sum += i;
//         }
//         printf("%d",sum);
//     }
// }

// 3. Print the product of all integers between 1 and 10.
// int main(void)
// {
//     int product = 1;
//     for(int i = 1; i < 11; i++)
//     {
//         product *= i;
//     }
//     printf("%d\n", product);
// }

// 4. Print all odd integers between 0 and 30.
// int main(void)
// {
//     for(int i = 1; i < 31; i += 2 )
//     {
//         printf("%d\n",i);
//     }
// }

// 5. Print all even integers between 0 and 30.
// int main(void)
// {
//     for(int i = 0; i < 31; i +=2)
//     {
//         printf("%d\n", i);
//     }
// }

// 6. Print the sum of all even integers between 0 and 30.
// int main(void)
// {
//     int sum = 0;
//     for(int i = 1; i < 31; i += 2 )
//     {
//         sum += i;
//         printf("%d\n",sum);
//     }
// }

// 7. Print a rectangle of asterisks (*), of height 3 and width 6. The output of your program should be (without the dots):
// int main(void)
// {
//     for(int i = 0; i < 3; i++)
//     {
//         printf("******\n");
//     }
// }


//8. Print a rectangle of asterisks again, but this time, ask the user for both the height and width.
// int main(void)
// {
//     int height = get_int("height");
//     int width = get_int("width");
//     for(int i = 0; i < height; i++)
//     {
//         for(int j = 0; j < width; j++)
//         {
//           printf("*");
//         }
//         printf("\n");
//     }
// }


// 9. Ask user for input until they type a positive integer.
// int main(void)
// {
//     int n = 1;
//     while (n % 2 != 0)
//     {
//         n = get_int("positive integer: ");
//     }

// }

// 10. Ask user for input until they type a negative integer.
// int main(void)
// {
//     int n = 1;
//     while (n > 0)
//     {
//         n = get_int("negative integer: ");
//     }

// }


// 11. Ask user for integer and print all its numerical digits
//(e.g: for input 32986, your program should print 3, 2, 9, 8, 6, in whichever order).
//int main(void)
// {
//     string s = get_string("string: ");
//     for(int i = 0, len = strlen(s); i<len; i++)
//     {
//         printf("%c, ", s[i]);
//     }
// }

// 12. Ask user for integer and print the largest numerical digit
//(e.g: for input 3945, your program should print 9).
// int main(void)
// {
//     int largest = 0;
//     string input = get_string("input: ");
//     for(int i = 0, len = strlen(input); i < len; i++)
//     {
//         if (input[i] > largest)
//         {
//             largest = input[i];
//         }
//     }
//     printf("%c", largest);
// }


// 13. Ask user for integer and print the sum of all its numerical digits
//(e.g: for input 12345, you should print 15: 1 + 2 + 3 + 4 + 5).
// int main(void)
// {
//     string input = get_string("input:");
//     int sum = 0;
//     for(int i = 0, len = strlen(input); i < len; i++)
//     {
//         sum += input[i] - '0';
//     }
//     printf("%d\n", sum);
// }

// 14. Ask user for integer and print every other numerical digit
//(e.g: for input 12345, you should print 1, 3 and 5, in whichever order).
// int main(void)
// {
//     string input = get_string("input: ");
//     for (int i = 0, len = strlen(input); i < len; i+=2)
//     {
//         printf("%d\n", input[i] - '0');
//     }
// }


// 15. Ask user for integer and check if the sum of its digits is a multiple of 10
//(e.g: for input 32564, your program should print true, because 3 + 2 + 5 + 6 + 4 is 20, and 20 % 10 is 0).
//Print false if the user input isn't a multiple of 10.
// int main(void)
// {
//     string input = get_string("input: ");
//     int sum = 0;
//     for (int i = 0, len = strlen(input); i < len; i++)
//     {
//         sum += input[i] - '0';
//     }
//     if (sum % 10 == 0)
//     {
//         printf("true\n");
//     }
//     else
//     {
//         printf("false\n");
//     }
// }
//16. .	Write a C program that will print the following pattern:

    //   1******
    //   12*****
    //   123****
    //   1234***
    //   12345**
    //   123456*
    //   1234567

// int main(void)
// {
//     for(int i = 1; i < 8; i++)
//     {
//         for(int j = 1; j < i+1; j++)
//         {
//             printf("%d", j);
//         }
//         for(int j = 7; j > i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

// }

//17. !!!! UNSOLVED !!!
//Write a C program that will print the patters as shown below:
// *
// ***
// *****
// *******
// *********
// *********
// *******
// *****
// ***
// *

//18.
//Create a program that grabs a string of text and then totals the values of all characters in the string (as integers).

// int main(void)
// {
//     string input = get_string("input: ");
//     printf("%lu\n", strlen(input));
// }

//19. Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.
//  1
//  22
//  333
//  4444
// int main(void)
// {
//     int height = get_int("input: ");
//     for (int i = 1; i <=height; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", i);
//         }
//     printf("\n");
//     }
// }

//20.Write a program in C to make such a pattern like right angle triangle with number increased by 1. Go to the editor
//The pattern like :
//   1
//   2 3
//   4 5 6
//   7 8 9 10
// int main(void)
// {
//     int height = get_int("input: ");
//     int k = 1;
//     for (int i = 1; i <= height; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", k++);
//         }
//         printf("\n");
//     }
// }

// 21. Write a program in C to make such a pattern like a pyramid with numbers increased by 1. Go to the editor
//   1
//  2 3
// 4 5 6
//7 8 9 10
// int main(void)
// {
//     int height = get_int("input: ");
//     int k = 1;
//     for (int i = 1; i <= height; i++)
//     {
//         for (int j = height; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < i; j++)
//         {
//             printf("%d ",k++);
//         }
//     printf("\n");
//     }
// }

//22.Write a program in C to make such a pattern like a pyramid with an asterisk. Go to the editor

//    *
//   * *
//  * * *
// * * * *
// int main(void)
// {
//     int height = get_int("input: ");
//     for (int i = 1; i <= height; i++)
//     {
//         for (int j = height; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < i; j++)
//         {
//             printf("* ");
//         }
//     printf("\n");
//     }
// }

//23. upside down 22
// int main(void)
// {
//     int height = get_int("input: ");
//     for (int i = 1; i <= height; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = height; j >= i; j--)
//         {
//             printf("* ");
//         }
//     printf("\n");
//     }
// }

// 24. Display first 100 prime numbers
// int prime(number)
// {
//     for(int i = 2; i <= ceil(number/2); i++)
//     {
//         if(number % i == 0) return 0;
//     }
//     return number;
// }

// int main(void)
// {
//     int counter = 0;
//     for (int i = 2; counter <= 100; i++)
//     {
//         int prime = prime(i);
//         if(prime != 0)
//         {
//             printf("%d, ", prime);
//             counter += 1;
//         }
//     }
// }

//25. Write a C program to calculate the factorial of a given number. Go to the editor
// Test Data :
// Input the number : 5
// Expected Output :
// The Factorial of 5 is: 120
// int main(void)
// {
//     int input = get_int("input: ");
//     long long output = 1;
//     for (int i = 1; i <= input; i++)
//     {
//         output *= i;
//     }
//     printf("%lld\n",output);
// }

//26. Write a program in C to display the n terms of even natural number and their sum. Go to the editor
// Test Data :
// Input number of terms : 5
// Expected Output :
// The even numbers are :2 4 6 8 10
// The Sum of even Natural Number upto 5 terms : 30
// int main(void)
// {
//     int input = get_int("input: ");
//     int sum = 0;
//     printf("output: ");
//     for (int i = 1; i <= input; i++)
//     {
//         printf("%d ", 2 * i);
//         sum += 2 * i;
//     }
//     printf("\nsum of even natural number upto 5 terms: %d\n", sum);
// }

//27. Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row.
//    1
//   2 2
//  3 3 3
// 4 4 4 4
// int main(void)
// {
//     int height = get_int("input: ");
//     for (int i = 1; i <=height; i++)
//     {
//         for (int j = height; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", i);
//         }
//     printf("\n");
//     }
// }

//28.Write a program in C to display the n terms of harmonic series and their sum. Go to the editor
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// 1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
// Sum of Series upto 5 terms : 2.283334
// int main(void)
// {
//     int input = get_int("input: ");
//     float sum = 0;
//     for (int i = 1; i <= input; i++)
//     {
//      printf("1/%i +", i);
//      sum += (float)1 / i;
//     }
//     printf("\n%f", sum);
// }

//29. Write a program in C to display the pattern like a pyramid using asterisk
//    *
//   ***
//  *****
// int main(void)
// {
//     int height = get_int("height: ");
//     for (int i = 1; i <=height; i++)
//     {
//         for (int j = height; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             printf("*");
//         }
//     printf("\n");
//     }
// }

//30.Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
// Test Data :
// Input the number or terms :5
// Expected Output :
// 9 99 999 9999 99999
// The sum of the saries = 111105

// int main(void)
// {
//     int input = get_int("input: ");
//     int sum = 0;
//     for (int i = 1; i <= input; i++)
//         {
//             sum += (int)pow(10,i) - 1;
//         }
//     printf("%i\n", sum);

// }

//!!!!!!!!!!!!!!!!!!!!UNSOLVED!!!
//31. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].

// Test Data :
// Input the Value of x :2
// Input the number of terms : 5
// Expected Output :
// the sum = -0.415873
// Number of terms = 5
// value of x = 2.000000

// int main(void)
// {
//     int x = get_int("x: ");
//     int n = get_int("n: ");
//     for (int i =1; i <= n; i++)
//     {

//     }
// }


//32. Write a program in C to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks. Go to the editor

//    *
//   ***
//  *****

// int main(void)
// {
//     int input = get_int("input: ");
//     for (int i = 1; i <= input; i++)
//     {
//         for (int j = input; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2 * i -1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

// }

//!!!!!!!!!!!!!!!!!!!!UNSOLVED!!!
//33.Write a program in C to print the Floyd's Triangle. Go to the editor

// 1
// 01
// 101
// 0101
// 10101

// int main(void)
// {
//     int input = get_int("input; ");
//     for (int i = 1; i <= input; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//         printf("1");
//         }
//     printf("\n");
//     }

// }

//34.Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]. Go to the editor
// Test Data :
// Input the value of x :3
// Input number of terms : 5
// Expected Output :
// The sum is : 16.375000
// int factorial(int n)
// {
//     int fac = 1;
//     for (int i = 1; i <= n; i ++)
//     {
//         fac *= i;
//     }
//     return fac;
// }

// int main(void)
// {
//     float x = get_int("x: ");
//     float turm = get_int("turm: ");
//     float sum = 1.000000;
//     for (int i =1; i <= turm; i++)
//     {
//         sum += pow(x,i) / factorial(i);
//     }
//     printf("%f", sum);
// }

//35. Write a program in C to display the n terms of square natural number and their sum.
// 1 4 9 16 ... n Terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// The square natural upto 5 terms are :1 4 9 16 25
// The Sum of Square Natural Number upto 5 terms = 55
// int main(void)
// {
//     int input = get_int("input: ");
//     int sum = 0;
//     for (int i = 1; i <= input; i++)
//     {
//         sum += i * i;
//     }
//     printf("%i", sum);
// }

//36. Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms. Go to the editor
// Test Data :
// Input the number of terms : 5
// Expected Output :
// 1 + 11 + 111 + 1111 + 11111
// The Sum is : 12345
// 1 + (10 + 1) + (100 + (10 +1) ) + (1000 + 100 + (10 + 1))
// int main(void)
// {
//     int input = get_int("input: ");
//     int sum = 1;
//     int total = 1;
//     for (int i = 1; i < input; i++)
//     {
//         sum += pow(10, i);
//         printf("%i\n", sum);
//         total += sum;
//     }
//     printf("%i", total);
// }

//37.Write a c program to check whether a given number is a perfect number or not.
// Input the number : 56
// Expected Output :
// The positive divisor : 1 2 4 7 8 14 28
// The sum of the divisor is : 64
// So, the number is not perfect.
// int divisorSum(int number);
// int main(void)
// {
//     int input = get_int("input: ");
//     if (divisorSum(input) == input)
//     {
//         printf("Perfect Number\n");
//     }
//     else
//     {
//         printf("Not Perfect\n");
//     }
// }

// int divisorSum(int number)
// {
//     int sum = 0;
//     for (int i = 1; i < number; i ++)
//     {
//         if (number % i == 0)
//         {
//             sum += i;
//         }
//     }
//     return sum;
// }

//38.Write a c program to find the perfect numbers within a given number of range.
// Test Data :
// Input the starting range or number : 1
// Input the ending range of number : 50
// Expected Output :
// The Perfect numbers within the given range : 6 28

// int divisorSum(int number);
// int check_perfect(int n)
// {
//     if (divisorSum(n) == n)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int divisorSum(int number)
// {
//     int sum = 0;
//     for (int i = 1; i < number; i ++)
//     {
//         if (number % i == 0)
//         {
//             sum += i;
//         }
//     }
//     return sum;
// }

// int main(void)
// {
//     int nStart = get_int("start: ");
//     int nEnd = get_int("end: ");
//     for (int i = nStart, n = 1; i <= nEnd; i++, n++)
//     {
//         if (check_perfect(i) == 1)
//         {
//             printf("%i ", i);
//         }
//     }
// }

//39.Write a C program to check whether a given number is an armstrong number or not.
// Test Data :
// Input a number: 153
// Expected Output : 153 is an Armstrong number.
// int armstrong(string number)
// {
//     int l = strlen(number);
//     int sum = 0;
//     int d = 0;
//     for(int i = 0; i < l; i++)
//     {
//         d = (int)number[i] - '0';
//         sum += pow(d, l);
//     }
//     return sum;
// }

// int main(void)
// {
//     string input = get_string("input: ");
//     if(armstrong(input) == atoi(input))
//     {
//         printf("%s is an Armstrong number\n", input);
//     }
//     else
//     {
//         printf("%s is not Armstrong number\n", input);
//     }
// }

//40. Write a C program to find the Armstrong number for a given range of number.
// Test Data :
// Input starting number of range: 1
// Input ending number of range : 1000
// Expected Output :
// Armstrong numbers in given range are: 1 153 370 371 407
// bool armstrong(int number)
// {
//     int sum = 0;
//     int d = 0;
//     for(int i = 1, j = 0; i <= 3; i++, j++)
//     {
//         long long x = pow(10, i);
//         long long y = pow(10, j);
//         d = number % x / y;
//         sum += d * d * d;
//     }
//     if (sum != number)
//     {
//         return false;
//     }
//     return true;
// }
// int main(void)
// {
//     int start = get_int("start: ");
//     int end = get_int("end: ");
//     for (int i = start; i < end; i++)
//     {
//         if (armstrong(i) == true)
//         {
//             printf("%i ", i);
//         }
//     }
//     printf("\n");
// }


//41.Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function. Go to the editor
// Expected Output :
// The sum of the series is : 34
// int factorial(int n)
// {
//     int fac = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fac *= i;
//     }
//     return fac;
// }
// int main(void)
// {
//     int input = get_int("input: ");
//     int sum = 0;
//     for (int i = 1; i <= input; i++)
//     {
//         sum += factorial(i) / i;
//     }
//     printf("%i\n", sum);
// }

//42. Write a C program to determine whether a given number is prime or not. Go to the editor
//  Test Data :
// Input a number: 13
// Expected Output :
// 13 is a prime number.

// bool prime_check(int number)
// {
//     for (int i = 2; i < ceil(number/2); i++)
//     {
//         if (number % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(void)
// {
//     int input = get_int("input: ");
//     if (prime_check(input) == true)
//     {
//         printf("%i is a prime number", input);
//     }
//     else
//     {
//         printf("%i is NOT a prime number", input);
//     }
// }

//43.  Write a program in C to display the number in reverse order. Go to the editor
// Test Data :
// Input a number: 12345
// Expected Output :
// The number in reverse order is : 54321
// int main(void)
// {
//     string input = get_string("input: ");
//     int len = strlen(input);
//     printf("reverse order is: ");
//     for (int i = len - 1; i >= 0; i--)
//     {
//         char p = input[i];
//         printf("%c", p);
//     }
// }

//44. Ask the user for a string, and if that string contains the letter 'z', print true. Otherwise, print false.
// int main(void)
// {
//     string input = get_string("input: ");
//     for (int i = 0; i < strlen(input); i++)
//     {
//         if (input[i] == 'z')
//         {
//             printf("true\n");
//             return 1;
//         }
//     }
//      printf("false\n");
// }


//45. Some examples of palindromes in English are: madam, civic, level and Ana.
// int middle_position(string word)
// {
//     int middle = strlen(word) / 2;
//     return middle;
// }
// int main(void)
// {
//     string input = get_string("input: ");
//     int last = strlen(input) - 1;
//     int middle = middle_position(input);
//     for (int i = 0, j = last; i <= middle; i++, j--)
//     {
//         if(input[i] != input[j])
//         {
//             return 0;
//         }
//     }
//     printf("%s is palindromes!", input);
// }

//46. Write a C program to display Pascal's triangle. Go to the editor
//  Test Data :
// Input number of rows: 5
// Expected Output :

//         1
//       1   1
//     1   2   1
//   1   3   3   1
// 1   4   6   4   1
// int pascal(int n, int k)
// {
//     if (n == 1 || k == 1 || n == k)
//     {
//         return 1;
//     }
//     return pascal(n - 1, k) + pascal(n - 1, k - 1);
// }
// int main(void)
// {
//     int input = get_int("input: ");
//     for (int i = 1; i <= input; i++)
//     {
//         for (int j = input; j > i; j--)
//         {
//             printf("  ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("  %d ", pascal(i,j));
//         }
//         printf("\n");
//     }
// }

// 47. Write a program in C to convert decimal number to binary number using the function.
// Test Data :
// Input any decimal number : 65
// Expected Output :
//  The Binary value is : 1000001
// int divided(int n)
// {
//     int result = n / 2.0;
//     return result;
// }
// int main(void)
// {
//     int input = get_int("input: ");
//     int sum = input % 2;
//     for (int i = 1, temp = input; i < input; i++)
//     {
//       temp = divided(temp);
//       sum += (int)(pow(10,i) * (temp % 2));
//     }
//     printf("%i\n", sum);
// }

//48.Problem 2 - Movie Titles
// "Title Case". That is, every word of the title should start with an uppercase letter,
// and all other letters of the word should be lowercase.
// input
// star wars: a new hope
// THE lORD oF the rIngs: the fellowship of THE ring
// harry POTTER
// 007
// Output
// Star Wards: A New Hope
// The Lord of the Rings: The Fellowship of the Ring
// Harry Potter
// 007
// int main(void)
// {
//     string s = get_string("input string: ");
//     for (int i = 0; i < strlen(s); i++)
//     {
//         if (s[i] == 32)
//         {
//             s[i + 1] = toupper(s[i + 1]);
//         }
//         else if (i == 0)
//         {
//             s[i] = toupper(s[i]);
//         }
//         else if (isupper(s[i]) == 1)
//         {
//             s[i] = tolower(s[i]);
//         }
//         printf("%c", s[i]);
//     }
// }

//49. upsidedown triagle
int main(void)
{
    int input = get_int("input; ");
    for (int i = 0; i < input; i++)
    {
        for (int j = input; i <= 2 * j - 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}