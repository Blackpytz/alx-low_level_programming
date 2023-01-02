#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String
 * @c: Character
 *
 * Return: a pointer or NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
