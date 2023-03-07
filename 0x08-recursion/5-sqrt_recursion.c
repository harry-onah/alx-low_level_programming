#include "main.h"

/**
 * _evaluate - evaluates sqrt
 * @n: integer
 * @i: integer
 *
 * Return evaluate sqrt
 */
int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (_evaluate(i + 1, n));

	else if (i * i == n)
		return (i);

	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * if n does not have a sqr root shoul return -1
 * @n: integer
 *
 * Return: square root if it exist or -1
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
		return (_evaluate(i, n));
}
