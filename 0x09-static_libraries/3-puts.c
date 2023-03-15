#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to be printed
 *
 * Return: nothing on success
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
