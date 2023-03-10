#include <stdio.h>

int main()
{
        char NAME[] = "Peter";
        int age = 20;
        float cgpa = 3.9;
        int w_age= 30;

        printf("\n");
        printf("The tall guy's name is %s,\n", NAME);
        printf("%s is %d years of age and he is a ", NAME, age);
        printf("student with a cgpa of %.1f.\n", cgpa);
        cgpa = 4.3;
        printf("In %s's second year of studies, ", NAME);
        printf("his cgpa improved to %.1f.\n", cgpa);
        printf("Because of %s's appearance, ", NAME);
        printf("his age was mistaken to %d.\n", w_age);
        cgpa = 4.6;
        printf("In %s's 3rd year, his cgpa became %.1f\n", NAME, cgpa);
        cgpa = 4.0;
        printf("But in %s's final year, his cgpa became %.1f.\n", NAME, cgpa);
        age = 24;
        printf("When Peter graduated, his age was %d.\n", age);
        w_age = 35;
        printf("Although people thought %s's age was %d\n", NAME, w_age);

        return 0;
}