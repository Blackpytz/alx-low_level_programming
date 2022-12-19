#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Parameter
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;

	while (*s[i])
	{
		i++;
	}
	return (i);
}
