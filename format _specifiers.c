#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: a function to practice format specifiers
 * return: 0 
*/

int main()
{
    char name[] = "Kwame Owusu-Bamfo";
    char grade[] = "A+";
    int age = 24;
    float per_comp = 54.5;
    double cgpa = 3.55;
    float fgpa = 3.55;

    printf("Dear Sir/Madam,\nI trust you are doing well.\n");
    printf("\n");
    printf("My name is %s. I am %d years of age, who has progressed %.2f%% in his tertiary education.\n", name, age, per_comp);
    printf("\n");
    printf("With a grade of %s, I have a cgpa of %.2lf and an fgpa of %.2f.\n", grade, cgpa, fgpa);

    return 0;
}