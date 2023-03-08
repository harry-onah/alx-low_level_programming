#include "main.h"

/**
 *
 */
char *_strchr(char *s, char c)
{
	int i = p;
	
	for (; s[i] >=  '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
