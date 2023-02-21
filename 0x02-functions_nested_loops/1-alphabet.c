#include "main.h"

/**
 * Description: This program prints lowercase alphabets
 */
void print_alphabet(void)
{
	int start = 97, end = 122;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}

	_putchar('\n');
}
