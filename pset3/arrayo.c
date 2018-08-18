//Write a program that ask a user for a number of elements n (max 100)
//then prompt the user n times to get the n elements and store them in an array:
#include <cs50.h>
#include <stdio.h>
#include <limits.h>

int max(int arr[], int size);
int min(int arr[], int size);
float average(int arr[], int size);
int gap(int arr[], int size);
int secondmax(int arr[], int size);
int *reverse(int arr[], int size);
int *seconds(int arr[], int size);
int *even(int arr[], int size);

int main(void)
{
    int n = 200;
    while (n > 100)
    {
        printf("A number of elements: ");
        scanf("%i", &n);
    }
    int *array = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        int element;
        printf("Element nr.%i: ", i);
        scanf("%i", &element);
        array[i] = element;
    }
    printf("Max: %i\n", max(array, n));
    printf("Min: %i\n", min(array, n));
    printf("Average: %.2f\n", average(array, n));
    printf("Gap: %i\n", gap(array, n));
    printf("Second maximum: %i\n", secondmax(array, n));

    //REVERSE ARRAY
    printf("Reverse array: ");
    int *reverse_array = reverse(array, n);
    for (int i = 0; i < n; i++)
    {
        printf("%i, ", reverse_array[i]);
    }
    printf("\n");

    //EVERY SECOND ELEMENT ARRAY
    printf("Every second element array: ");
    int *everysecond_array = seconds(array, n);
    for (int i = 0; i <= n / 2; i++)
    {
        printf("%i, ", everysecond_array[i]);
    }
    printf("\n");

    //EVEN NUMBER ARRAY
    printf("Even number array: ");
    even(array, n);
    printf("\n");

}

// 1- Write a function that takes an array and its size and returns the maximum value of its elements.
int max(int arr[], int size)
{
    int max = arr[0], len = size;
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// 2- Write a function that takes an array and its size and returns the minimum value of its elements.
int min(int arr[], int size)
{
    int len = size, min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

// 3- Write a function that takes an array and its size and returns the average of its elements
float average(int arr[], int size)
{
    float avg, sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    avg = sum / size;
    return avg;
}

//4- Write a function that takes an array and its size and returns its gap value
int gap(int arr[], int size)
{
    return max(arr, size) - min(arr, size);
}

//5- Write a function that takes an array and its size and returns the second maximum value of its elements.
int secondmax(int arr[], int size)
{
    int maxi = max(arr, size), secondmax = INT_MIN, len = size;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == maxi)
        {
            continue;
        }
        else if (arr[i] > secondmax)
        {
            secondmax = arr[i];
        }
    }
    return secondmax;
}

//6- Write a function that takes an array and its size and returns a new array as a reverse of the input array.
int *reverse(int arr[], int size)
{
    int *newarr = malloc(size * sizeof(int));
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        newarr[i] = arr[j];
    }
    return newarr;
}

// 7- Write a function that returns a new array with every second element of the first array.
int *seconds(int arr[], int size)
{
    int *newarr = malloc(size / 2 * sizeof(int));
    for (int i = 0, j = 0; i < size; i += 2)
    {
        newarr[j] = arr[i];
        j++;
    }
    return newarr;
}
// 8- Write a function that takes an array and its size and returns a new array with only even numbers.
int *even(int arr[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            counter ++;
        }
    }
    int *newarr = malloc((counter + 1) * sizeof(int));
    for (int i = 0, j = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            newarr[j] = arr[i];
            j++;
        }
    }

    return newarr;
}

//9- Write a function that takes an array and its size, then split the array by half into 2 arrays,
//then create a new array and return it by merging the 2 arrays element by element.
//[1, 2, 3, 4, 5, 6, 7, 8] => [1, 2, 3, 4]  [5, 6, 7, 8] => [1, 5, 2, 6, 3, 7, 4, 8]
//[1, 2, 3, 4, 5, 6, 7, 8, 9] => [1, 2, 3, 4, 5]  [6, 7, 8, 9] => [1, 6, 2, 7, 3, 9, 4, 9, 5]
// int *shuffle(int arr[], int size)
// {
//     int half = size / 2;
//     int *first_array = malloc(half * sizeof(int));
//     int *second_array = malloc(half * sizeof(int));
//     for (int i = 0, j = 0; i < half; i++)
//     {
//         first_array[j] = arr[i];
//         j++;
//     }
//     for (int i = half, j = 0; i < size; i++)
//     {
//         second_array[j] = arr[i];
//         j++;
//     }
//     int *result_array = malloc(size * sizeof(int));
//     for (int i = 0; i < size; i++)
//     {
//         result_array[i] = first_array[i];
//     }

// }