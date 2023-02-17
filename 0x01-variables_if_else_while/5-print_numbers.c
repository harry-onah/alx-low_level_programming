#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: a program to print the numbers 0 to 9 in bas 10
 * Return: 0
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	
	putchar('\n');
	return (0);
}
