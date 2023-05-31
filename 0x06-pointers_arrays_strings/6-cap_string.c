#include "main.h"

/**
*cap_string - capitalizes all words of a string
*@c: a pointer to a string
*Return: Pointer to the resulting string.
*/
char *cap_string(char *c)
{
	char specialchars[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == specialchars && (c[i] >= 'a' && c[i] <= 'z'))
			c[i] = c[i] - 32;
	}
	return (c);
}
