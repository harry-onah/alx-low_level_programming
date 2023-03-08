#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: pointer character
 * Return: string or NULL if charater not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	
	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
