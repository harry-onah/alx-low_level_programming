#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main entry
 * Description: this program compares the last digit of random number with 5 and prints the corresponding output
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6 and is not 0\n", n, last);
	return (0);
}
