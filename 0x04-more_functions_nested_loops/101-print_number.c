#include "main.h"

/**
 * print_number - function to print number
 * @n: integer
 * Return: always
 */
void print_number(int n)
{
	unsigned int num = n;
	
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	else if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
