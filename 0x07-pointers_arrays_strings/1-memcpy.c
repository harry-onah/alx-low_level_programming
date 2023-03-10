#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: n bytes
 * @src: memory area source
 * @dest: memory destination
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
