#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * If n is lower than 0, the function should return -1 to
 * indicate an error
 * Factorial of 0 is 1
 * @n: integer number
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
