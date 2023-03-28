#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all its parameters
 * @n: integer number
 * @...: A variable number of integer to be printed
 *
 * Return: sum, 0 otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(pa, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);

	va_end(pa);
	return (sum);
}
