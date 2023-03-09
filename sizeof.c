#include <stdio.h>

/**
 * main - entry point
 * Description: A function that uses sizeof operator
 * to print sizes of various data types
 * return: 0
*/

int main()
{

    int a;
    char b;
    float c;
    double d;

    printf("Size of \"int\" is %lu byte(s)\n", sizeof(a));
    printf("Size of \"char\" is %lu byte(s)\n", sizeof(b));
    printf("Size of \"float\" is %lu byte(s)\n", sizeof(c));
    printf("Size of \"double\" is %lu byte(s)\n", sizeof(d));
    
    return 0;
}