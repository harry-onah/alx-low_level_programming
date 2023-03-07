#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 * if y is lower than 0, the function should return -1
 * @x: first inter number
 * @y: second integer number
 *
 * Return: the result of power recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
