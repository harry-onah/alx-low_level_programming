#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 * from 0 to 14
 * Return: 0-14 10times
 */
void more_numbers(void)
{
	int i;
	int row;

	for (row = 0; row <= 9; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
