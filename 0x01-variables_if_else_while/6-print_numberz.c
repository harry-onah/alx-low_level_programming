#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: this program output the numbers 0 to 10
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		n++;
	}

	putchar('\n');
	return (0);
}
