#include "main.h"

/**
 * main - main Entry
 * Description: This program prints lowercase alphabets
 * Return 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
	return (0);
}
