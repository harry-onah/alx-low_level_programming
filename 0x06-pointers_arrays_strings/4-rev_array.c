#include "main.h"

/**
 * reverse_array - a function that reverse the content of an
 * array of integers
 * @a: is an array of integers
 * @n: is the is the number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
