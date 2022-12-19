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

	for (i = 0; *s != '\0'; i++)
	{
		++i;
	}
	return (i);
}
