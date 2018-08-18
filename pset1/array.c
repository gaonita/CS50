#include <cs50.h>
#include <stdio.h>

int main(void) {
    char* strs = get_string("Hello:");
    //int x = 5;
    //int* y = &x;

    while (*strs != '\0') {
        char current = *strs;
        strs++;
        printf("%c\n", current);
    }
   // printf("%c, %p", *strs, strs);
}