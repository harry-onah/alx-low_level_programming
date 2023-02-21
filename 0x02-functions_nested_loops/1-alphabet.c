#include "main.h"

/**
 * main - main Entry
 * Description: This program prints lowercase alphabets
 * Return 0
 */
int main(void)
{
	int start = 97, end = 122;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}

	_putchar('\n');
	return (0);
}
