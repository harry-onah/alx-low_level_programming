#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main entry
 * Description: A program that outputs negative or positive numbers
 * Return: 0
 */
void positive_or_negative(int n)
{
        if (n > 0)
                printf("%i is positive\n", n);
        else if (n < 0)
                printf("%i is negative\n", n);
        else
                printf("%i is zero\n", n);
}
