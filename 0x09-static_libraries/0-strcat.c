#include "main.h"

/**
 * _strcat - This function appends the src string to the dest
 * string, overwriting the terminating null byte (\0) at the
 * end of dest, and then adds a terminating null byte
 * @dest: first string to be concatnated
 * @src: second string to be concatnated
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
