#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * letters a  and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
			str[index1] - 32 == leet[index2])
			{
				str[index1] = index2 + '0';
			}
		}
		index1++;
	}
	return (str);
}
