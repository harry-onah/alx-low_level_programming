#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: This program prints all possible combination
 * of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return (0);
}
