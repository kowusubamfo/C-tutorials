#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: a function to practice the use of format specifiers
 * return = 0
*/

int main()
{
    float a = 19.31;
    float b = 19.32;
    float c = 19.33;

    printf("Hello take one %8.2f\n", a);
    printf("Hello take two %8.2f\n", b);
    printf("Hello take three %6.2f\n", c);

    return 0;

}