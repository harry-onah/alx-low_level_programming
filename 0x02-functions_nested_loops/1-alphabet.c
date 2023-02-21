#include "main.h"

/**
 * print_alphabet - entry point
 * prints alphabets in lowercase
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
